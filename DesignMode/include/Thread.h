#ifndef _THREAD_H
#define _THREAD_H
#include<pthread.h>


class Thread{
public:
        //线程的状态－新建
    static const int THREAD_STATUS_NEW = 0;
    //线程的状态－正在运行
    static const int THREAD_STATUS_RUNNING = 1;
    //线程的状态－运行结束
    static const int THREAD_STATUS_EXIT = -1;

    Thread();

    virtual ~Thread(){};

    virtual void run()=0;

    bool start();

    pthread_t getThreadId()const;

    int getState()const;

    void join();

    void join(unsigned long millisTime);


private:

//    void *run1();

    static void *thread_proxy_func(void * args);  

    //当前线程的线程ID  
    pthread_t tid;  
    //线程的状态  
    int threadStatus; 

};






#endif

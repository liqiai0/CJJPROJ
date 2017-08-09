#include <iostream>
#include <pthread.h>
#include<sys/types.h>
#include<unistd.h>


using namespace std;

class Thread{
public:
    Thread(){};
    virtual~Thread(){};
    void start(){
        pthread_create(&tid,NULL,func,this);
    };
    virtual void run()=0;
    void join(){
        pthread_join(tid,NULL);
    }
private:
    pthread_t tid;
    static void* func(void *arg){
        Thread *t=(Thread*)arg;
        t->run();
        return NULL;
    }
};

class T1:public Thread{
public:
    void run(){
        for(int i=0;i<10;i++){
            cout<<"hello "<<pthread_self()<<endl;
        }
    }
};


int main(){

   cout<<pthread_self()<<endl;

   T1 t1;
   t1.start();
   t1.join();

    return 0;
}

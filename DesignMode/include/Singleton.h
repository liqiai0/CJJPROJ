#ifndef _SINGLETON_H
#define _SINGLETON_H
/*********************************************
 *单例模式
 *
 *单例对象作为静态成员，将构造函数用protected修饰，
 *外界无法调用，智能类本身
 *
 ***********************************************/
class Singleton{
    public:
        static Singleton *instance();
    protected:
        Singleton();
    private:
       static Singleton * mInstance;
};



#endif



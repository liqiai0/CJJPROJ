#ifndef _WATCHER_H
#define _WATCHER_H
#include<string>
#include<iostream>

using namespace std;



class Watcher{
public:
    virtual ~Watcher(){}
    virtual void update(const string& msg)=0;
};

class WatchDog:public Watcher{
    public:
        WatchDog(){ };
        void update(const string& msg);
        ~WatchDog();
};

class Police:public Watcher{
    public:
        Police(){};
        void update(const string& msg);
        ~Police();
};




#endif


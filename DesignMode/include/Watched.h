#ifndef _WATCHED_H
#define _WATCHED_H
#include<string>
#include<iostream>
#include<list>
using namespace std;


class Watcher;

class Watched{
public:
    virtual ~Watched(){};
    virtual void addWatcher(Watcher*  mWatcher)=0;
    virtual void notifyAll(const string &msg)=0;
};

class Suspect:public Watched{
public:
    ~Suspect();
    Suspect(){}
    void addWatcher(Watcher* mWatcher); 
    void notifyAll(const string &msg);
private:
    list<Watcher*> mList;
};



/*
 *


 int main(){

 Watched *sWatched=new Suspect();

 Watcher* dog=new WatchDog();

 Watcher* police=new Police();

 sWatched->addWatcher(dog);
 sWatched->addWatcher(police);

 sWatched->notifyAll("shot shot");

 delete sWatched;
 delete police;
 delete dog;


 return 0;
 }

 *
 */






#endif



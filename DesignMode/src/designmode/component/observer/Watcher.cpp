#include<Watcher.h>
#include<string>
#include<iostream>


using namespace std;


void WatchDog::update(const string &msg){
    cout<<"Wo Wo ,get msg :"<<msg<<endl;
}

WatchDog::~WatchDog(){
    cout<<"WatchDog disconstrcutor"<<endl;
}

void Police::update(const string &msg){
    cout<<"I am polic ,please put down gun,i hear:"<<msg<<endl;
}

Police::~Police(){
    cout<<"Police disconstructor"<<endl;
}


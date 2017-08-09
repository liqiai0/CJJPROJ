#include<iostream>
#include<Watcher.h>
#include<Watched.h>
#include<list>
#include<assert.h>
using namespace std;



void Suspect::addWatcher(Watcher* mWatcher){  
    assert(mWatcher!=NULL);
    mList.push_back(mWatcher);    
}

void Suspect::notifyAll(const string& msg){

    list<Watcher*>::iterator pList;

    for(pList=mList.begin();pList!=mList.end();pList++){
       (*pList)->update(msg); 
    }

} 

Suspect::~Suspect(){
    cout<<"disconstructor suspect"<<endl;
}




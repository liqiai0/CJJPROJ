#include"Decorator.h"
#include<iostream>
#include<assert.h>
using namespace std;


Decorator::Decorator(Project *mProject){
    assert(mProject!=NULL);
    this->mProject=mProject;
}
void Decorator::doProject(){
    earlyWork();
    assert(mProject!=NULL);
    mProject->doProject();
    endWork();
}


void ManagerA::earlyWork(){
    cout<<"ManagerA do earlyWork"<<endl;
}
void ManagerA::endWork(){
    cout<<"ManagerA do endWork"<<endl;
}


void Employee::doProject(){
    cout<<"coding codeing ,hard working"<<endl;
}






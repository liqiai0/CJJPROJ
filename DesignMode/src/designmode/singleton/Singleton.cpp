#include<iostream>
#include"Singleton.h"
using namespace std;


Singleton* Singleton::mInstance=NULL;

Singleton::Singleton(){
    cout<<"Singleton create\n";
}
Singleton* Singleton::instance(){
    
    if(mInstance==NULL){
        mInstance=new Singleton();
    }
    return mInstance;
}




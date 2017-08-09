#include<iostream>
#include"Account.h"

using namespace std; 

bool Account::login(const string& name,const string &passwd){
    cout<<"Account login========"<<endl;
    if(fromMysql(name,passwd)){
        return true;
    }
    
    return false;
}

bool Account::fromMysql(const string &name,const string &passwd){
    cout<<"Account fromMysql=======\n";
    return true;
}

void Account::back(){
    cout<<"user "<<this->name<<" back\n";
}


void Account::templateMthod(){
    if(login(this->name,this->passwd)){
        cout<<this->name<<" login success\n";
        this->userOpreator();
        this->back();
    }else{
        this->back();
    }
}

Account::Account(string &name,string &passwd){
    this->name=name;
    this->passwd=passwd;
}

ConcretAccount::ConcretAccount(string& name,string &passwd){
    this->name=name;
    this->passwd=passwd;
}

void ConcretAccount::userOpreator(){
    cout<<"ConcretAccount userOpreator\n";
}

/**************************************************************
 *
 *
 *
 *
 *
 *
 *
 *
 *

int main{

 
    string *n=new string("name");
    string *p=new string("passwd");

    string name("google");
    string passwd("ssss");

   Account *mAccount= new ConcretAccount(name,passwd);

    mAccount->templateMthod();

    delete mAccount;
        
    return 0;
    }
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 *
 */

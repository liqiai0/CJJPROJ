#ifndef _ACCOUNT_H
#define _ACCOUNT_H
#include<string>
//加上   当有string的时候
using namespace std;
/**
 *
 * template 模式
 *
 * class Account抽象类，
 * 
 *
 *函数 templateMthod 
    返回 void 
    模板方法
 *
 */



class Account{
    public:
        Account(){};
        Account(string &name,string &passwd);
        virtual ~Account(){};
        void templateMthod();
        bool login(const string &namne,const string &passwd);
        virtual void userOpreator()=0;
        void back();
    protected:
        string name;
        string passwd;
        bool fromMysql(const string &name,const string &passwd);

};

class ConcretAccount : public Account{
    public:
        void userOpreator();
        ConcretAccount(string &name,string &passwd);
        ~ConcretAccount(){};
        ConcretAccount(){}
};










#endif











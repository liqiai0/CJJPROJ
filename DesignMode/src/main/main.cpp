#include<iostream>
#include<Singleton.h>
#include"Account.h"
#include"Strategy.h"
#include"Watcher.h"
#include"Watched.h"
#include"Decorator.h"
#include"Bridge.h"
#include"Thread.h"
#include<unistd.h>
#include<sys/types.h>
using namespace std;

class MultiThread : public Thread  
{  
public:  
    void run()  
    {  
        int number = 0;  
        for (int i = 0; i < 10; i++)  
        {  
            cout << "Current number is " << number++;  
            cout << " PID is " << getpid() << " TID is " << getThreadId() << endl;  
            sleep(1);  
        }  
    }  
};

int main(){

    
    MultiThread t;

  bool ret=  t.start();
  sleep(1);
    cout<<"ret="<<ret<<endl;
  t.join();


    return 0;    
}



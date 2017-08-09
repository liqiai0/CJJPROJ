#include<iostream>
#include<Strategy.h>
#include<assert.h>

using namespace std;




double PrimaryStrategy::CalcPrice(double price){
    cout<<"Primary member no discout"<<endl;
    return price;
}

PrimaryStrategy::~PrimaryStrategy(){
    cout<<"PrimaryStrategy disconstractor"<<endl;
}


double MeduimStrategy::CalcPrice(double price){
    cout<<"Meduim member 10% /discout"<<endl;
    return price*0.9;
}

MeduimStrategy::~MeduimStrategy(){
    cout<<"MeduimStrategy disconstractor"<<endl;
}




double AdvanceStrategy::CalcPrice(double price){
    cout<<"Advance member 20% /discout"<<endl;
    return price*0.8;
}

AdvanceStrategy::~AdvanceStrategy(){
    cout<<"AdvanceStrategy disconstractor"<<endl;
}

PriceContext* PriceContext::mInstance=NULL;

PriceContext* PriceContext::getInstance(){
    if(mInstance==NULL){
        mInstance=new PriceContext();
    }
    assert(mInstance!=NULL);
    return mInstance;
}

void PriceContext::setStrategy(Strategy* mStrategy){
    assert(mStrategy!=NULL);
    this->mStrategy=mStrategy;
}

double PriceContext::getPrice(double price){
    assert(this->mStrategy!=NULL);
    return mStrategy->CalcPrice(price);
}


PriceContext::~PriceContext(){
    cout<<"PriceContext disconstract"<<endl;
}




/*
 int main(){       
    PriceContext *mContext=PriceContext::getInstance();
    
    double price=0;
    

    Strategy *priStrategy=new PrimaryStrategy();
    mContext->setStrategy(priStrategy);
    price=mContext->getPrice(10);
    cout<<price<<endl;
   
    Strategy *advStrategy=new AdvanceStrategy();
    mContext->setStrategy(advStrategy);
    price=mContext->getPrice(100);
    cout<<price<<endl;

    Strategy *mediumStrategy=new MeduimStrategy();
    mContext->setStrategy(mediumStrategy);
    price=mContext->getPrice(200);
    cout<<price<<endl;

    delete priStrategy;
    delete advStrategy;
    delete mediumStrategy;
    delete mContext;
        return 0;
    }

*/

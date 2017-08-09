#include<iostream>
#include<assert.h>
#include"Bridge.h"


using namespace std;

void DrawCircle::draw(){
    cout<<"Drawing circle\n";
}

void DrawRectangle::draw(){
    cout<<"Drawing Rectangle\n";
}

Bridge::Bridge(IDraw *mDraw){
    assert(mDraw!=NULL);
    this->mDraw=mDraw;
}

RedPaint::RedPaint(IDraw *mDraw){
    this->mDraw=mDraw; 
}
void RedPaint::paintDraw(){
    cout<<"using redpaint ";
    this->mDraw->draw();

}

GreenPaint::GreenPaint(IDraw *mDraw){
    this->mDraw=mDraw;
}
void GreenPaint::paintDraw(){
    cout<<"uing GreenPaint ";
    this->mDraw->draw();
}

GreenPaint::~GreenPaint(){
    assert(this->mDraw!=NULL);
    delete mDraw;
}

RedPaint::~RedPaint(){

    assert(this->mDraw!=NULL);
    delete mDraw;
}



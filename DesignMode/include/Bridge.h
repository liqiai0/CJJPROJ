#ifndef _BRIDGE_H
#define _BRIDGE_H


/********
 * 桥头实现
 */
class IDraw{
    public:
        ~IDraw(){};
        virtual void draw()=0;
};

class DrawCircle:public IDraw{
    public:
        void draw();
        ~DrawCircle(){};
};

class DrawRectangle:public IDraw{
    public:
        void draw();
        ~DrawRectangle(){};
};

/**
 * 桥
 */
class Bridge{
    public:
        Bridge(IDraw* mDraw);
        Bridge(){}
       virtual ~Bridge(){};
       virtual void paintDraw()=0;
    protected:
        IDraw *mDraw;
};


class RedPaint:public Bridge{
    public:
       RedPaint(IDraw* mDraw);
       void paintDraw();
       ~RedPaint();
};

class GreenPaint:public Bridge{
public:
    GreenPaint(IDraw *mDraw);
    void paintDraw();
    ~GreenPaint();
};




#endif


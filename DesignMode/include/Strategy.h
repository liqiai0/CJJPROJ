#ifndef _STRATEGY_H
#define _STRATEGY_H

class Strategy{
    public:
        virtual ~Strategy(){};
        virtual double CalcPrice(double price)=0;
};

class PrimaryStrategy: public Strategy{
    public:
        ~PrimaryStrategy();
        double CalcPrice(double price);
};

class MeduimStrategy: public Strategy{
    public:
        ~MeduimStrategy();
        double CalcPrice(double price);
};


class AdvanceStrategy: public Strategy{
    public:
        ~AdvanceStrategy();
        double CalcPrice(double price);
};

class PriceContext{
    public:
        ~PriceContext();
        double getPrice(double price);
        static PriceContext* getInstance();
        void setStrategy(Strategy* mStrategy);
    protected:
        PriceContext(){};
    private:
        static PriceContext* mInstance;
        Strategy * mStrategy;
};


#endif


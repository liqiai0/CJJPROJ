#ifndef _DECORATOR_H
#define _DECORATOR_H

class Project{
    public:
        virtual ~Project(){}
        virtual void doProject()=0;
};

class Decorator:public Project{
    public:
        virtual ~Decorator(){}
        Decorator(){}
        Decorator(Project *mProject);
        virtual void earlyWork()=0;
        virtual void endWork()=0;
        void doProject();
    protected:
        Project* mProject;
};

class ManagerA:public Decorator{
    public:
        ~ManagerA(){}
        ManagerA(){}
        ManagerA(Project *mProject){
            this->mProject=mProject;
        };
        void earlyWork();
        void endWork();
};

class Employee:public Project{
    public:
        void doProject();
};


#endif


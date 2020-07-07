//
// Created by Administrator on 2020/7/7.
//

#ifndef _ABSTRACTIONIMP_H_
#define _ABSTRACTIONIMP_H_

class AbstractionImp
{
public:
    virtual ~AbstractionImp();
    virtual void Operation() = 0;

protected:
    AbstractionImp();

private:
};

class ConcreteAbstractionImpA:public AbstractionImp
{
public:
    ConcreteAbstractionImpA();
    ~ConcreteAbstractionImpA();
    virtual void Operation();

protected:

private:
};

class ConcreteAbstractionImpB:public AbstractionImp
{
public:
    ConcreteAbstractionImpB();
    ~ConcreteAbstractionImpB();
    virtual void Operation();

protected:

private:
};


#endif //BRIDGE_ABSTRACTIONIMP_H

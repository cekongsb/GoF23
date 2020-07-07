//
// Created by Administrator on 2020/7/7.
//

#ifndef _ABSTRACTION_H_
#define _ABSTRACTION_H_

class AbstractionImp;

class Abstraction
{
public:
    virtual ~Abstraction();
    virtual void Operation() = 0;

protected:
    Abstraction();

private:
};

class RefinedAbstraction:public Abstraction
{
public:
    RefinedAbstraction(AbstractionImp* imp);
    ~RefinedAbstraction();
    void Operation();

protected:

private:
    AbstractionImp* _imp;
};

#endif //BRIDGE_ABSTRACTION_H

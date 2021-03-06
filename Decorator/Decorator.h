//
// Created by Administrator on 2020/7/15.
//

#ifndef DECORATOR_DECORATOR_H
#define DECORATOR_DECORATOR_H
class Component{
public:
    virtual ~Component();
    virtual void Operation();

protected:
    Component();

private:
};

class ConcreteComponent:public Component{
public:
    ConcreteComponent();
    ~ConcreteComponent();
    void Operation();

protected:
private:
};

class  Decorator:public Component
{
public:
    Decorator(Component* com);
    virtual ~Decorator();
    void Operation();

protected:
    Component* _com;
private:
};

class ConcreteDecorator:public Decorator
{
public:
    ConcreteDecorator(Component* com);
    ~ConcreteDecorator();
    void Operation();
    void AddedBehavior();

protected:
private:
};
#endif //DECORATOR_DECORATOR_H

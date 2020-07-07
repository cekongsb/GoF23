//
// Created by Administrator on 2020/7/7.
//

#ifndef ADAPTER_ADAPTER_H
#define ADAPTER_ADAPTER_H
class Target
{
public:
    Target();
    virtual  ~Target();
    virtual void Request();

protected:
private:
};

class Adaptee
{
public:
    Adaptee();
    ~Adaptee();
    void SpecificRequst();

protected:
private:
};

class Adapter:public Target,private Adaptee
{
public:
    Adapter(Adaptee* ade);
    ~Adapter();
    void Request();

protected:
private:
    Adaptee* _ade;
};
#endif //ADAPTER_ADAPTER_H

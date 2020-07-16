//
// Created by Administrator on 2020/7/14.
//

#ifndef PROTOTYPE_PROTOTYPE_H
#define PROTOTYPE_PROTOTYPE_H
class Prototype
{
public:
    virtual ~Prototype();
    virtual Prototype* Clone() const = 0;

protected:
    Prototype();

private:
};

class ConcretePrototype:public Prototype
{
public:
    ConcretePrototype();
    ConcretePrototype(const ConcretePrototype& cp);

    ~ConcretePrototype();
    Prototype* Clone() const;

protected:
private:
};
#endif //PROTOTYPE_PROTOTYPE_H

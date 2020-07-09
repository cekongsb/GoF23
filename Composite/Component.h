//
// Created by Administrator on 2020/7/8.
//

#ifndef COMPOSITE_COMPONENT_H
#define COMPOSITE_COMPONENT_H
class Component
{
public:
    Component();
    virtual ~Component();

public:
    virtual void Operation() = 0;
    virtual void Add(const Component&);
    virtual void Remove(const Component&);
    virtual Component*GetChild(int);

protected:
private:
};
#endif //COMPOSITE_COMPONENT_H

//
// Created by Administrator on 2020/7/8.
//

#ifndef COMPOSITE_COMPOSITE_H
#define COMPOSITE_COMPOSITE_H

#include "Component.h"
#include <vector>
using namespace std;

class Composite:public Component
{
public:
    Composite();

    ~Composite();

public:
    void Operation();
    void Add(Component* com);
    void Remove(Component* com);
    Component* GetChild(int index);

protected:
private:
    vector<Component*> comVec;
};
#endif //COMPOSITE_COMPOSITE_H

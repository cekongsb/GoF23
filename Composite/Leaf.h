//
// Created by Administrator on 2020/7/8.
//

#ifndef COMPOSITE_LEAF_H
#define COMPOSITE_LEAF_H

#include "Component.h"

class Leaf:public Component
{
public:
    Leaf();
    ~Leaf();
    void Operation();

protected:
private:
};

#endif //COMPOSITE_LEAF_H

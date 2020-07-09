//
// Created by Administrator on 2020/7/8.
//
#include "Composite.h"
#include "Component.h"
#define NULL 0

Composite::Composite() {
//    comVec.begin();
}
Composite::~Composite() {

}

void Composite::Operation() {
    vector<Component*>::iterator comIter = comVec.begin();
    for(;comIter != comVec.end();comIter++){
        (*comIter)->Operation();
    }
}
 void Composite::Add(Component* com) {
    comVec.push_back(com);
}

void Composite::Remove(Component* com) {
    comVec.erase(&com);
}
Component* Composite::GetChild(int index) {
    return comVec[index];
}
//
// Created by Administrator on 2020/7/7.
//
#include "AbstractionImp.h"
#include <iostream>
using namespace std;

AbstractionImp::AbstractionImp() {

}

AbstractionImp::~AbstractionImp() {

}

void AbstractionImp::Operation() {
    cout<<"Abstraction...imp..."<<endl;
}

ConcreteAbstractionImpA::ConcreteAbstractionImpA() {

}

ConcreteAbstractionImpA::~ConcreteAbstractionImpA() {

}

void ConcreteAbstractionImpA::Operation() {
    cout<<"ConcreteAbstractionImpA..."<<endl;
}

ConcreteAbstractionImpB::ConcreteAbstractionImpB() {

}

ConcreteAbstractionImpB::~ConcreteAbstractionImpB() {

}

void ConcreteAbstractionImpB::Operation() {
    cout<<"ConcreteAbstractionImpB..."<<endl;
}


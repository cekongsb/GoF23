//
// Created by Administrator on 2020/7/7.
//
#include "Adapter.h"
#include <iostream>
Target::Target() {

}
Target::~Target() {

}

void Target::Request() {
    std::cout<<"Target::Requst"<<std::endl;
}

Adaptee::Adaptee() {

}
Adaptee::~Adaptee() {

}
void Adaptee::SpecificRequst() {
    std::cout<<"Adaptee::SpecificRequst"<<std::endl;
}

Adapter::Adapter(Adaptee* ade) {
    this->_ade =ade;
}

Adapter::~Adapter() {

}
void Adapter::Request() {
    this->SpecificRequst();
}
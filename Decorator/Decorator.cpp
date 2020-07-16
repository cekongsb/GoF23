//
// Created by Administrator on 2020/7/16.
//
#include "Decorator.h"
#include <iostream>

Component::Component() {

}

Component::~Component() {

}

void Component::Operation() {

}

ConcreteComponent::ConcreteComponent() {

}
ConcreteComponent::~ConcreteComponent() {

}

void ConcreteComponent::Operation() {
    std::cout<<"ConcreteComponent Operation..."<<std::endl;
}

Decorator::Decorator(Component *com) {
    this->_com = com;
}

Decorator::~Decorator() {
    delete _com;
}

void Decorator::Operation() {

}

ConcreteDecorator::ConcreteDecorator(Component *com):Decorator(com) {}

void ConcreteDecorator::AddedBehavior() {
    std::cout<<"ConcreteDecorator::AddedBehavior..."<<std::endl;
}

void ConcreteDecorator::Operation() {
    _com->Operation();
    this->AddedBehavior();
}
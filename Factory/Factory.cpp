//
// Created by Administrator on 2020/7/11.
//
#include "Factory.h"
#include "Product.h"

#include <iostream>
using namespace std;

Factory::Factory() {

}
Factory::~Factory() {

}

ConcreteFactory::ConcreteFactory() {
    cout<<"ConcreteFactory..."<<endl;
}

ConcreteFactory::~ConcreteFactory() {

}

Product*ConcreteFactory::CreateProduct() {
    return new ConreteProduct();
}

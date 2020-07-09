//
// Created by Administrator on 2020/7/8.
//
#include "Builder.h"
#include "Product.h"
#include <iostream>

using namespace std;

Builder::Builder() {

}

Builder::~Builder() {

}

ConcreteBuilder::ConcreteBuilder() {

}

ConcreteBuilder::~ConcreteBuilder() {

}

void ConcreteBuilder::BuilderPartA(const string &buildPara) {
    cout<<"Step1:Build PartA..."<<buildPara<<endl;
}

void ConcreteBuilder::BuilderPartB(const string &buildPara) {
    cout<<"Step1:Build PartB..."<<buildPara<<endl;
}

void ConcreteBuilder::BuilderPartC(const string &buildPara) {
    cout<<"Step1:Build PartC..."<<buildPara<<endl;
}

Product* ConcreteBuilder::GetProduct() {
    BuilderPartA("pre-defined");
    BuilderPartB("pre-defined");
    BuilderPartC("pre-defined");
    return new Product();
}

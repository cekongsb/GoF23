//
// Created by Administrator on 2020/7/8.
//
#include "Director.h"
#include "Builder.h"

Director::Director(Builder *bld) {
    _bld = bld;
}

Director::~Director() {

}

void Director::Construct() {
    _bld->BuilderPartA("user-defined");
    _bld->BuilderPartB("user-defined");
    _bld->BuilderPartC("user-defined");
}


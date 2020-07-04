//
// Created by Administrator on 2020/7/4.
//
#include "Subject.h"
#include "Observer.h"
#include <iostream>
#include <list>
using namespace std;
typedef string State;
Subject::Subject() {
    //在模板的使用之前一定要new，创建
    _obvs = new list<Observer*>;
}
Subject::~Subject() {

}
void Subject::Attach(Observer *obv) {
    _obvs->push_front(obv);
}
void Subject::Detach(Observer *obv) {
    if(obv != NULL)
        _obvs->remove(obv);
}
void Subject::Notify() {
    list<Observer*>::iterator it;
    it = _obvs->begin();
    for(;it != _obvs->end();it++){
        //关于模板和iterator
        (*it)->Update(this);
    }
}
ConcreteSubject::ConcreteSubject() {
    _st = '\0';
}

ConcreteSubject::~ConcreteSubject() {

}

State ConcreteSubject::GetState() {
    return _st;
}
void ConcreteSubject::SetState(const State &st) {
    _st = st;
}


//
// Created by Administrator on 2020/7/14.
//

#ifndef SINGLETON_SINGLETON_H
#define SINGLETON_SINGLETON_H

#include <iostream>
using namespace std;

class Singleton{
public:
    static Singleton* Instance();

protected:
    Singleton();

private:
    static Singleton* _instance;
};
#endif //SINGLETON_SINGLETON_H

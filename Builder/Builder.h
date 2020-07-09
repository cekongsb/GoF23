//
// Created by Administrator on 2020/7/8.
//

#ifndef BUILDER_BUILDER_H
#define BUILDER_BUILDER_H

#include <string>
using namespace std;

class Product;

class Builder{
public:
    virtual ~Builder();
    virtual void BuilderPartA(const string& builderPara) = 0;
    virtual void BuilderPartB(const string& builderPara) = 0;
    virtual void BuilderPartC(const string& builderPara) = 0;
    virtual Product* GetProduct() = 0;

protected:
    Builder();

private:
};

class ConcreteBuilder:public Builder{
public:
    ConcreteBuilder();
    ~ConcreteBuilder();
    void BuilderPartA(const string& buildPara);
    void BuilderPartB(const string& buildPara);
    void BuilderPartC(const string& buildPara);
    Product* GetProduct();

protected:
private:
};
#endif //BUILDER_BUILDER_H

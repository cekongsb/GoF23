//
// Created by Administrator on 2020/7/11.
//

#ifndef FACTORY_FACTORY_H
#define FACTORY_FACTORY_H
class Product;

class Factory
{
public:
    virtual ~Factory() = 0;
    virtual Product*CreateProduct() = 0;

protected:
    Factory();

private:
};

class ConcreteFactory:public Factory{
public:
    ~ConcreteFactory();
    ConcreteFactory();

    Product*CreateProduct();

protected:
private:
};
#endif //FACTORY_FACTORY_H

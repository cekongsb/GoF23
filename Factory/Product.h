//
// Created by Administrator on 2020/7/11.
//

#ifndef FACTORY_PRODUCT_H
#define FACTORY_PRODUCT_H

class Product
{
public:
    virtual ~Product() = 0;

protected:
    Product();

private:
};

class ConreteProduct:public Product
{
public:
    ~ConreteProduct();
    ConreteProduct();

protected:

private:
};

#endif //FACTORY_PRODUCT_H

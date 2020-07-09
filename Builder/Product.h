//
// Created by Administrator on 2020/7/8.
//

#ifndef BUILDER_PRODUCT_H
#define BUILDER_PRODUCT_H

class Product
{
public:
    Product();
    ~Product();

    void ProducePart();

protected:
private:
};

class ProductPart
{
public:
    ProductPart();
    ~ProductPart();

    ProductPart* BuildPart();

protected:
private:
};
#endif //BUILDER_PRODUCT_H

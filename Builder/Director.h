//
// Created by Administrator on 2020/7/8.
//

#ifndef BUILDER_DIRECTOR_H
#define BUILDER_DIRECTOR_H
class Builder;
class Director{
public:
    Director(Builder* bld);
    ~Director();
    void Construct();

protected:
private:
    Builder* _bld;
};

#endif //BUILDER_DIRECTOR_H

#include "Adapter.h"
#include <iostream>

int main(int argc, char* argv[]) {
    Adaptee* ade = new Adaptee;
    Target* adt = new Adapter(ade);

    adt->Request();
    return 0;
}
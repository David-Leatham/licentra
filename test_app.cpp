#include <iostream>
#include "test_app.h"


Print::Print(const char *name, const char *name_two) :
    _name { name },
    _name_two { name_two } {

}
Print::~Print() {}

void Print::print() {

    printf("Hello %s!\n", _name);
    printf("Hello %s!\n", _name_two);

}
#include "../cube.h"
#include <iostream>

void foo(Cube cube) {
    // Nothing :P
}

int main(){
    Cube c;
    foo(c);


    return 0;
}

//In this program, we expect a default
//constructor to be called on line 9,
// and a copy constructor to be called on line 10
// THATS IT!
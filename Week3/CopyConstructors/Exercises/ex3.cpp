#include "../cube.h"
#include <iostream>

int main() {
    Cube c; // Default constructor called here!
    Cube myCube = c;
    //Copy constructor called line 6!
    //This is because we are creating an object
    // out of another object.! Mycube is a reference to c
    

    return 0;
}
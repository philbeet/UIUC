//Copy constructors are used to share resources
//between 2 instances of a class.

//The automatic copy constructor will copy
//the contents of all member variables.

//Automatic copy constructors are defined
//for us if we do not define a copy constructor of any kind.

//-------HOW COPY CONSTRUCTORS WORK----\\/

//When are copy constructors called?
// 1. Passing an object as a parameter (to a function or other object)
// DEPRECATED --- 2. Returning an object from a function -- DEPRECATED. NOW THIS CALLS THE MOVE CONSTRUCTOR
// 3. Initializing a new object from a existing one {NOT copying an existing object to another existing one!}
#include <iostream>
#include "cube.h"

//1. Passing an object as a parameter
void foo(Cube cube){
    std::cout << cube.getVolume();
}

int main(){
    Cube c;
    foo(c);
    return 0;
}
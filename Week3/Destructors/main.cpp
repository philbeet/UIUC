//Destructors are never called directly
// thus, they are never called in compile time
//DESTRUCTORS ARE CALLED AUTOMATICALLY
// AT RUNTIME BY THE PROGRAM. THIS HAPPENS WHEN:
// * stack objects are destroyed when they go out of scope
// * heap objects are destroyed by delete keyword.
//THATS WHY YOU DONT NEED TO CALL THE DESTRUCTOR
//EXPLICITLY.

#include <iostream> 
#include "./cube.h"

int main(){
    Cube c = Cube(2);
    std::cout << "c is worth $" << c.getVolume() << std::endl;
    
    return 0;
}
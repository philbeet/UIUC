#include "../cube.h"
#include <iostream>

Cube foo() { //This function will return a cube object!
    std::cout<< "FOO"<< std::endl;
    Cube c(10); //Initialize a local cube. Default constructor!!
    std::cout << "EXITING FOO"<< std::endl;
    return c;
    // In the olden days, line 8 would call the copy constructor to copy c into 
    //main's stack, and like 15 would call another copy constructor to reference c2
    // to the memory address allocated by line 8. HOWEVER, THIS IS NO MORE!!
    // Now c++ uses MOVE CONSTRUCTORS. We'll talk about this some other time.
    
}

int main(){
    std::cout <<"BRUH"<< std::endl;
    Cube c2 = foo();

    int x = c2.getSurfaceArea();
    std::cout << x;
    return 0;
}
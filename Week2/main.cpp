// #include "cube.h"
#include <iostream>


int main(){
    
    // int x = 1;
    // std::cout << & x << " " << x;
    // int* x_ptr = &x; // "&x" is x's memory address. 
    //                 // x_ptr will have the value of x's memory address,
    //                 // &x_ptr will be x_ptr's own unique memory address.
    //                 // for pointers, using *x_ptr will access the value stored in the
    //                 // address the pointer is pointing at.

    // std::cout << std::endl;

    // int *x = new int;
    // // int &y = x;
    // int &z = *x; //this isn't sayig "the address of z is the dereferenced value of x"
    //                 // rather it is saying "let z be a reference to the dereferenced value of x"
    // z=1;

    // std::cout << "x's own addres " << &x <<std::endl;
    // std::cout << "address x points at "<< x << std::endl;
    // std::cout << "the value in the memory x is pointing at " << *x << std::endl;

    // std::cout << "z's own address " << &z << std::endl;
    // std::cout << "the value stored in z " << z << std::endl;


    //-------------LESSONS ON SCOPE--
    //C++ allows you to just randomly scope things
    //in the middle of your code! SWAG.
    int x = 2;
    std::cout << "This is in the outer scope! x = " << x << std::endl;

    //randomly init an inner scope without an if, loop, or anything else
    {
        int x = 100;
        std::cout << "This x is in an inner scope! x = " << x <<std::endl;
    }
    std::cout << "Back to the outer scope! x = " << x;
    return 0;
}
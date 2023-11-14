#include "cube.h"
#include <iostream>

int main(){
    Cube c; //Cube using custom default constructor

    Cube c2(10); //Cube using custom non-default constructor
    std::cout << c.getVolume() << std::endl;
    std::cout <<c2.getVolume();
}

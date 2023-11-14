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

Cube::Cube() { //default constructor 
    length_ = 1;

};
 
Cube::Cube(int length){ //custom constructor
    length_ = length;
};

Cube::~Cube(){ //DESTRUCTOR!!!! 
    std::cout << "Just destroyed $" << getVolume() << std::endl;

}

// Cube methods:
double Cube::getVolume() {
  return length_ * length_ * length_;
}

double Cube::getSurfaceArea() {
  return 6 * length_ * length_;
}

void Cube::setLength(double length) {
  length_ = length;
}


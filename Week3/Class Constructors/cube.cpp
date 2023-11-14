#include <iostream>
#include "cube.h"

Cube::Cube(){ //default constructor, no arguments given
    length_ = 1;
}

//We can also define custom non-default constructors
// allowing the user to supply arguments.
Cube::Cube(double length){
  length_ = length;
}

//NOTE! If you define a constructor that takes arguments,
//the automatic default constructor gets deleted!
//If you define ANY CONSTRUCTOR AT ALL, the automatic default
//gets deleted. If you want to pass no arguments, you'll
//have to have defined a default constructor yourself.



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
#include <iostream>
#include "cube.h"



Cube::Cube(){ //default constructor, no arguments given
    length_ = 1;
    std::cout << "Default constructor invoked";
}

//We can also define custom non-default constructors
// allowing the user to supply arguments.
Cube::Cube(double length){
  length_ = length;
}

//COPY CONSTRUCTOR!!!

Cube::Cube(const Cube &obj){
    length_ = obj.length_;
    //Why &obj? We are declaring that "obj" is a 
        // reference to a cube passed into it! Remember that
        //parameters are actually defined as param = arg,
        //so in this case Cube "&obj" = argumentCube.
        // &Obj is a REFERENCE to the cube object passed into it.
        //This allows us to access a cube in memory with out actually
        //allocating more memory.
    std::cout << "Copy constructor invoked!!!";
}


Cube& Cube::operator=(const Cube &obj){
  length_ = obj.length_;
  std::cout << "Assignment operator used!";
  return *this;
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
//Destructors are never called directly
// thus, they are never called in compile time
//DESTRUCTORS ARE CALLED AUTOMATICALLY
// AT RUNTIME BY THE PROGRAM. THIS HAPPENS WHEN:
// * stack objects are destroyed when they go out of scope
// * heap objects are destroyed by delete keyword.
//THATS WHY YOU DONT NEED TO CALL THE DESTRUCTOR
//EXPLICITLY.

//To define a destructor, it must have:
// 1. No return type
// 2. Be prepended by a tilde
// 3. No arguments

#pragma once

class Cube {
    public:
        Cube(); // custom default constructor

        Cube(int length); //custom param constructor

        ~Cube(); //Custom DESTRUCTOR !!!

        //member function stuff
        double getVolume();
        double getSurfaceArea();
        void setLength(double length);
    
    private:
        double length_;
};
#pragma once

class Cube {
    public:
        Cube(); // custom default constructor, run if no arguments given.
        Cube(double length); //Custom non-default constructor, allows n arguments. (in this case, n=1) 
        
        Cube(const Cube &obj); //Custom Copy Constructor!!! 
        //Why &obj? We are declaring that "obj" is a 
        // reference to a cube passed into it! Remember that
        //parameters are actually defined as param = arg,
        //so in this case Cube "&obj" = argumentCube.
        // &Obj is a REFERENCE to the cube object passed into it.
        //This allows us to access a cube in memory with out actually
        //allocating more memory.


    
        double getVolume();
        double getSurfaceArea();
        void setLength(double length);
    
    private:
        double length_;
};
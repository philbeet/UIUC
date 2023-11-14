#pragma once

class Cube {
    public:
        Cube(); // custom default constructor, run if no arguments given.
        Cube(double length); //Custom non-default constructor, allows n arguments. (in this case, n=1) 
        double getVolume();
        double getSurfaceArea();
        void setLength(double length);
    
    private:
        double length_;
};
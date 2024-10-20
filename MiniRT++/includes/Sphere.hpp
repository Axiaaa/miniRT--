#pragma once

#include <iostream>
#include <math.h>

#include "miniRTpp.hpp"


/**
 * A vec3 has 3 components, x, y and z
 * 	It can represent a vector, anything that is represented with 3 numbers
 * 	(vector, position, colors, ...)
*/
class Sphere {
    
    private :
        float   center_pos;
        float   radius;
 
    public : 
        ~Sphere();
        Sphere();
        Sphere(float center_pos, float radius);

};
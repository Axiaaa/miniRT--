#pragma once

#include <math.h>

/**
 * A Vec_3f has 3 components, x, y and z
 * 	It can represent a vector, anything that is represented with 3 numbers
 * 	(vector, position, ...)
**/
class Vec_3f {

    private : 
        float x;
        float y; 
        float z;

    public : 

        Vec_3f();
        Vec_3f(float x, float y, float z);
        ~Vec_3f();

        //Vectors operations

        Vec_3f add(Vec_3f toAdd);
        Vec_3f sub(Vec_3f toSub);
        Vec_3f mult(Vec_3f toMult);
        Vec_3f cross(Vec_3f toCross);
        Vec_3f scale(float toScale);
        Vec_3f normalize();
        Vec_3f reflect(Vec_3f toReflect);

        float mag_sqrt();
        float mag();
        float dot(Vec_3f toDot);

        float getX();
        float getY();
        float getZ();

};
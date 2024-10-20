#pragma once

#include "miniRTpp.hpp"


class Ray {

    private : 
        Vec_3f origin;
        Vec_3f direction;

    public : 
        Ray();
        Ray(Vec_3f origin, Vec_3f dir);
        Vec_3f moove(float t);

};
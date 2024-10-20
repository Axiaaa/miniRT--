#include "Vector.hpp"


//Constructors
Vec_3f::Vec_3f() : x(0.f), y(0.f), z(0.f) {};
Vec_3f::Vec_3f(float x, float y, float z): x(x),y(y), z(z) {};


//Desctructors
Vec_3f::~Vec_3f() {};



//Methods

Vec_3f Vec_3f::add(Vec_3f toAdd) {
    Vec_3f result;

    result.x = this->x + toAdd.x;
    result.y = this->y + toAdd.y;
    result.z = this->z + toAdd.z;

    return result;
}

Vec_3f Vec_3f::sub(Vec_3f toSub) {

    Vec_3f result;

    result.x = this->x - toSub.x;
    result.y = this->y - toSub.y;
    result.z = this->z - toSub.z;

    return result;
}

Vec_3f Vec_3f::mult(Vec_3f toMult) {
    Vec_3f result;

    result.x = this->x * toMult.x;
    result.y = this->y * toMult.y;
    result.z = this->z * toMult.z;
    
    return result;
}

float Vec_3f::dot(Vec_3f toDot) {

    Vec_3f result = this->mult(toDot);
    return (result.x + result.y + result.z);
}

Vec_3f Vec_3f::cross(Vec_3f toCross) {
    Vec_3f result;

    result.x = this->y * toCross.z - this->z * toCross.y;
    result.y = this->z * toCross.x - this->x * toCross.z;
    result.z = this->x * toCross.y - this->y * toCross.x;

    return result;
}


Vec_3f Vec_3f::scale(float toScale) {
    Vec_3f result; 

    result.x = this->y * toScale;
    result.y = this->z * toScale;
    result.z = this->x * toScale;

    return result;
}

float Vec_3f::mag_sqrt() {

    return (dot(*this));
}

float Vec_3f::mag() {

    return (sqrtf(mag_sqrt()));
}


Vec_3f Vec_3f::normalize() { 

    return (scale(1.f / mag()));

}

Vec_3f Vec_3f::reflect(Vec_3f toReflect) {

    return (sub(scale(2.f * dot(toReflect))));
}

//Getters
float Vec_3f::getX() { return this->x ;};
float Vec_3f::getY() { return this->y ;};
float Vec_3f::getZ() { return this->z ;};

//Setters
#include "Sphere.hpp"


Sphere::Sphere(): center_pos(0), radius(0) {
    if (DEBUG)
        std::cout << "Default constructor called. Setting everything to 0..." << std::endl;
}

Sphere::Sphere(float center_pos, float radius):
center_pos(center_pos), radius(radius)  {

    std::cout << "New sphere created at pos " << center_pos << "with a radius of " << radius << std::endl;
}

Sphere::~Sphere() {
    if (DEBUG)
        std::cout << "Destruction sphere at " << center_pos << std::endl;
}
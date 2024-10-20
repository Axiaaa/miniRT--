#include "ray.hpp"

Ray::Ray(Vec_3f origin, Vec_3f direction) : origin(origin), direction(direction) {}

Vec_3f Ray::moove(float t) {
    return (origin.add(direction.scale(t)));
}
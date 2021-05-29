#ifndef CONE_H
#define CONE_H

#include <vector>
#include "sphericalpoint.hpp"
#include "point.hpp"
#include "normalTexPoint.hpp"
#include "uga.hpp"

class Cone {
private:
    float radius, height;
    int slices, stacks;

public:
    Cone(int, char**);
    std::vector<NormalTexPoint2> draw();
};
#endif

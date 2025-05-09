#pragma once

#include "Triangle.h"

class RightAngledTriangle : public Triangle {

public:
    RightAngledTriangle(int set_a, int set_b, int set_c, int set_A, int set_B);
    virtual int check_figure();
};

#pragma once

#include "Triangle.h"

class IsoscelesTriangle : public Triangle {

public:
    IsoscelesTriangle(int set_a, int set_b, int set_A, int set_B);
    virtual int check_figure();
};

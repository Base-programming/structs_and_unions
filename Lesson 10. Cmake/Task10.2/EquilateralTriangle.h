#pragma once

#include "Triangle.h"

class EquilateralTriangle : public Triangle {

public:
    EquilateralTriangle(int set_a);
    virtual int check_figure();
};

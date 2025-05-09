#pragma once

#include "Parallelogram.h"

class Rectangle : public Parallelogram {

public:
    Rectangle(int set_a, int set_b);
    virtual int check_figure();
};

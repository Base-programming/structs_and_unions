#pragma once

#include "Quadangle.h"

class Parallelogram : public Quadangle {

public:
    Parallelogram();
    Parallelogram(int set_a, int set_b, int set_A);
    virtual int check_figure();
};

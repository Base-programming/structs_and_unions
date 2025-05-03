#pragma once

#include "Parallelogram.h"

class Rhomb : public Parallelogram {

public:
    Rhomb(int set_a, int set_A);
    virtual int check_figure();
};

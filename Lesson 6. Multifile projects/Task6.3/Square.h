#pragma once

#include "Parallelogram.h"

class Square : public Parallelogram {

public:
    Square(int set_a);
    virtual int check_figure();
};

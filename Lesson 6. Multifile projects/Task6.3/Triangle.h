#pragma once

#include "Figure.h"

class Triangle : public Figure {

protected:
    int a{}, b{}, c{};
    int A{}, B{}, C{};
public:
    Triangle();
    Triangle(int set_a, int set_b, int set_c, int set_A, int set_B, int set_C);
    int get_a();
    int get_b();
    int get_c();
    void print_info() override;
    virtual int check_figure();
};

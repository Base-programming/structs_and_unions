#pragma once

#include "Figure.h"

class Quadangle : public Figure {

protected:
    int a{}, b{}, c{}, d{};
    int A{}, B{}, C{}, D{};
public:
    Quadangle();
    Quadangle(int set_a, int set_b, int set_c, int set_d, int set_A, int set_B, int set_C, int set_D);
    int get_a();
    int get_b();
    int get_c();
    int get_d();
    void print_info() override;
    virtual int check_figure();
};

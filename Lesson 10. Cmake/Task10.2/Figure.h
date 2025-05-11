#pragma once

#include <iostream>

class Figure {

private:
    int sides{};

protected:
    Figure(int setSides, std::string setName);
    std::string name{ "Фигура" };

public:
    Figure();
    int get_number_of_sides();
    virtual void print_info();
    virtual int check_figure();
};

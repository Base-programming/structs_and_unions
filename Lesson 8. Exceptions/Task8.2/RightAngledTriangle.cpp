#include <iostream>
#include "RightAngledTriangle.h"
#include "ExceptionFigureCreation.h"

RightAngledTriangle::RightAngledTriangle(int set_a, int set_b, int set_c, int set_A, int set_B) :
    Triangle(set_a, set_b, set_c, set_A, set_B, 90) {
    if(check_figure() != 0) {
        throw ExceptionFigureCreation("угол не равен 90");
    }
    name = "Прямоугольный треугольник";
};

int RightAngledTriangle::check_figure() {
    if (!Triangle::check_figure() && (C == 90)) {
        return 0;
    }
    else {
        return -1;
    }
}

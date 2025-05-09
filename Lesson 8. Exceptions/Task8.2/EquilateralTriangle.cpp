#include "EquilateralTriangle.h"
#include "ExceptionFigureCreation.h"

EquilateralTriangle::EquilateralTriangle(int set_a) {
    a = set_a;
    b = a;
    c = a;
    A = 180 / 3;
    B = A;
    C = A;
    name = "Равносторонний треугольник";
    Triangle::Triangle(a, b, c, A, B, C);
    if (check_figure() != 0) {
        throw ExceptionFigureCreation("стороны или углы не равны друг другу");
    }
};

int EquilateralTriangle::check_figure() {
    if (!Triangle::check_figure() && (a == b) && (a == c) && (A == B) && (A == C)) {
        return 0;
    }
    else {
        return -1;
    }
}

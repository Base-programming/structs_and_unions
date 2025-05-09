#include "IsoscelesTriangle.h"
#include "ExceptionFigureCreation.h"

IsoscelesTriangle::IsoscelesTriangle(int set_a, int set_b, int set_A, int set_B) :
    Triangle(set_a, set_b, set_a, set_A, set_B, set_A) {
    if (check_figure() != 0) {
        throw ExceptionFigureCreation("две стороны или два угла не равны между собой");
    }
    a = set_a;
    b = set_b;
    c = a;
    A = set_A;
    B = set_B;
    C = A;
    name = "–авнобедренный треугольник";
}

int IsoscelesTriangle::check_figure() {
    if (!Triangle::check_figure() && (a == c) && (A == C)) {
        return 0;
    }
    else {
        return -1;
    }
}

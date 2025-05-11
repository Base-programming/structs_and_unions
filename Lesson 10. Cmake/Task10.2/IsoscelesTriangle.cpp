#include "IsoscelesTriangle.h"

IsoscelesTriangle::IsoscelesTriangle(int set_a, int set_b, int set_A, int set_B) {
    a = set_a;
    b = set_b;
    c = a;
    A = set_A;
    B = set_B;
    C = A;
    name = "Равнобедренный треугольник";
}

int IsoscelesTriangle::check_figure() {
    if (!Triangle::check_figure() && (a == c) && (A == C)) {
        return 0;
    }
    else {
        return -1;
    }
}

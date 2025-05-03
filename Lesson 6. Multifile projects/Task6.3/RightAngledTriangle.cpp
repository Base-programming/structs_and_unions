#include "RightAngledTriangle.h"

RightAngledTriangle::RightAngledTriangle(int set_a, int set_b, int set_c, int set_A, int set_B) {
    a = set_a;
    b = set_b;
    c = set_c;
    A = set_A;
    B = set_B;
    C = 90;
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

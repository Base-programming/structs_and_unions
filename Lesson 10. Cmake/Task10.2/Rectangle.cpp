#include "Rectangle.h"

Rectangle::Rectangle(int set_a, int set_b) {
    a = set_a;
    b = set_b;
    c = a;
    d = b;
    A = 360 / 4;
    B = A;
    C = A;
    D = A;
    name = "Прямоугольник";
}

int Rectangle::check_figure() {
    if (!Quadangle::check_figure() && (a == c) && (b == d) && (A == B) && (A == C) && (A == D)) {
        return 0;
    }
    else {
        return -1;
    }
}

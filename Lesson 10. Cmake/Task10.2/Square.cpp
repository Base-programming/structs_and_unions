#include "Square.h"

Square::Square(int set_a) {
    a = set_a;
    b = a;
    c = a;
    d = a;
    A = 360 / 4;
    B = A;
    C = A;
    D = A;
    name = " вадрат";
}

int Square::check_figure() {
    if (!Quadangle::check_figure() && (a == b) && (a == c) && (a == d) && (A == B) && (A == C) && (A == D)) {
        return 0;
    }
    else {
        return -1;
    }
}

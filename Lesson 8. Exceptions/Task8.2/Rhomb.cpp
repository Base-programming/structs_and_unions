#include "Rhomb.h"
#include "ExceptionFigureCreation.h"

Rhomb::Rhomb(int set_a, int set_A) {
    a = set_a;
    b = a;
    c = a;
    d = a;
    A = set_A;
    B = 180 - A;
    C = A;
    D = B;
    name = "Ромб";
    Quadangle::Quadangle(a, b, c, d, A, B, C, D);
    if (check_figure() != 0) {
        throw ExceptionFigureCreation("стороны или углы не равны друг другу");
    }
}

int Rhomb::check_figure() {
    if (!Quadangle::check_figure() && (a == b) && (a == c) && (a == d) && (A == C) && (B == D)) {
        return 0;
    }
    else {
        return -1;
    }
}

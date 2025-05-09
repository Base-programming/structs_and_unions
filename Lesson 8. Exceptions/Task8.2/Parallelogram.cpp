#include "Parallelogram.h"
#include "ExceptionFigureCreation.h"

Parallelogram::Parallelogram() {};

Parallelogram::Parallelogram(int set_a, int set_b, int set_A) {
    a = set_a;
    b = set_b;
    c = a;
    d = b;
    A = set_A;
    B = 180 - A;
    C = A;
    D = B;
    name = "Параллелограмм";
    Quadangle::Quadangle(a, b, c, d, A, B, C, D);
    if (check_figure() != 0) {
        throw ExceptionFigureCreation("стороны или углы попарно не равны друг другу");
    }
}

int Parallelogram::check_figure() {
    if (!Quadangle::check_figure() && (a == c) && (b == d) && (A == C) && (B == D)) {
        return 0;
    }
    else {
        return -1;
    }
}

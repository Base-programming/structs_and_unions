#include "Rectangle.h"
#include "ExceptionFigureCreation.h"

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
    Quadangle::Quadangle(a, b, c, d, A, B, C, D);
    if (check_figure() != 0) {
        throw ExceptionFigureCreation("стороны или углы попарно не равны друг другу");
    }
}

int Rectangle::check_figure() {
    if (!Quadangle::check_figure() && (a == c) && (b == d) && (A == B) && (A == C) && (A == D)) {
        return 0;
    }
    else {
        return -1;
    }
}

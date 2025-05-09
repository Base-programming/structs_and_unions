#include "Quadangle.h"
#include "ExceptionFigureCreation.h"

Quadangle::Quadangle() : Figure(4, "���������������") {};

Quadangle::Quadangle(int set_a, int set_b, int set_c, int set_d, int set_A, int set_B, int set_C, int set_D) : Figure(4, "���������������"),
    a(set_a), b(set_b), c(set_c), d(set_d), A(set_A), B(set_B), C(set_C), D(set_D) {
    if (check_figure() != 0) {
        throw ExceptionFigureCreation("����� ����� �� ����� 360");
    }
};

int Quadangle::get_a() { return a; }

int Quadangle::get_b() { return b; }

int Quadangle::get_c() { return c; }

int Quadangle::get_d() { return d; }

void Quadangle::print_info() {
    std::cout << std::endl << name;
    std::cout << " (������� " << a << ", " << b << ", " << c << ", " << d << "; ";
    std::cout << "���� " << A << ", " << B << ", " << C << ", " << D << ")";
    std::cout << " ������" << std::endl;
}

int Quadangle::check_figure() {
    if ((get_number_of_sides() == 4) && ((A + B + C + D) == 360)) {
        return 0;
    }
    else {
        return -1;
    }
}

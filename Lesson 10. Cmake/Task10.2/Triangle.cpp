#include "Triangle.h"

Triangle::Triangle() : Figure(3, "Треугольник") {};

Triangle::Triangle(int set_a, int set_b, int set_c, int set_A, int set_B, int set_C) : Figure(3, "Треугольник"),
    a(set_a), b(set_b), c(set_c), A(set_A), B(set_B), C(set_C) {
};

int Triangle::get_a() { return a; }

int Triangle::get_b() { return b; }

int Triangle::get_c() { return c; }

void Triangle::print_info() {
    std::cout << std::endl << name << ": " << std::endl;
    std::cout << (check_figure() ? "Неправильная" : "Правильная") << std::endl;
    std::cout << "Количество сторон: " << get_number_of_sides() << std::endl;
    std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
    std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl;
}

int Triangle::check_figure() {
    if ((get_number_of_sides() == 3) && ((A + B + C) == 180)) {
        return 0;
    }
    else {
        return -1;
    }
}

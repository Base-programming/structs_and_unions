// Task5.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Figure {

private:

protected:
    std::string name{ "Фигура" };

public:
    Figure() {};
    virtual void print_info() {
        std::cout << name << ": " << std::endl;
    }
};

class Triangle : public Figure {

protected:
    int a{}, b{}, c{};
    int A{}, B{}, C{};
public:
    Triangle() {};
    Triangle(int set_a, int set_b, int set_c, int set_A, int set_B, int set_C) :
        a(set_a), b(set_b), c(set_c), A(set_A), B(set_B), C(set_C) {
        name = "Треугольник";
    };
    int get_a() { return a; }
    int get_b() { return b; }
    int get_c() { return c; }
    void print_info() override {
        std::cout << std::endl << name << ": " << std::endl;
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << std::endl;
    }
};

class RightAngledTriangle : public Triangle {

public:
    RightAngledTriangle(int set_a, int set_b, int set_c, int set_A, int set_B) {
        a = set_a;
        b = set_b;
        c = set_c;
        A = set_A;
        B = set_B;
        C = 90;
        name = "Прямоугольный треугольник";
    };
};

class IsoscelesTriangle : public Triangle {

public:
    IsoscelesTriangle(int set_a, int set_b, int set_A, int set_B) {
        a = set_a;
        b = set_b;
        c = a;
        A = set_A;
        B = set_B;
        C = A;
        name = "Равнобедренный треугольник";
    };
};

class EquilateralTriangle : public Triangle {

public:
    EquilateralTriangle(int set_a) {
        a = set_a;
        b = a;
        c = a;
        A = 180/3;
        B = A;
        C = A;
        name = "Равносторонний треугольник";
    };
};

class Quadangle : public Figure {

protected:
    int a{}, b{}, c{}, d{};
    int A{}, B{}, C{}, D{};
public:
    Quadangle() {};
    Quadangle(int set_a, int set_b, int set_c, int set_d, int set_A, int set_B, int set_C, int set_D) :
        a(set_a), b(set_b), c(set_c), d(set_d), A(set_A), B(set_B), C(set_C), D(set_D) {
        name = "Четырехугольник";
    };
    int get_a() { return a; }
    int get_b() { return b; }
    int get_c() { return c; }
    int get_d() { return d; }
    void print_info() override {
        std::cout << std::endl << name << ": " << std::endl;
        std::cout << "Стороны: a=" << a << " b=" << b << " c=" << c << " d=" << d << std::endl;
        std::cout << "Углы: A=" << A << " B=" << B << " C=" << C << " D=" << D << std::endl;
    }
};

class Parallelogram : public Quadangle {

public:
    Parallelogram() {};
    Parallelogram(int set_a, int set_b, int set_A) {
        a = set_a;
        b = set_b;
        c = a;
        d = b;
        A = set_A;
        B = 180-A;
        C = A;
        D = B;
        name = "Параллелограмм";
    };
};

class Rectangle : public Parallelogram {

public:
    Rectangle(int set_a, int set_b) {
        a = set_a;
        b = set_b;
        c = a;
        d = b;
        A = 360/4;
        B = A;
        C = A;
        D = A;
        name = "Прямоугольник";
    };
};

class Rhomb : public Parallelogram {

public:
    Rhomb(int set_a, int set_A) {
        a = set_a;
        b = a;
        c = a;
        d = a;
        A = set_A;
        B = 180-A;
        C = A;
        D = B;
        name = "Ромб";
    };
};

class Square : public Parallelogram {

public:
    Square(int set_a) {
        a = set_a;
        b = a;
        c = a;
        d = a;
        A = 360 / 4;
        B = A;
        C = A;
        D = A;
        name = "Квадрат";
    };
};

int main()
{
    std::setlocale(LC_ALL, "Russian");

    Figure* figure{};

    Triangle triangle(10, 20, 30, 50, 60, 70);
    figure = &triangle;
    figure->print_info();

    RightAngledTriangle right_angled_triangle(10, 20, 30, 50, 60);
    figure = &right_angled_triangle;
    figure->print_info();

    IsoscelesTriangle isosceles_triangle(10, 20, 50, 60);
    figure = &isosceles_triangle;
    figure->print_info();

    EquilateralTriangle equilateral_triangle(30);
    figure = &equilateral_triangle;
    figure->print_info();

    Quadangle quadangle(10, 20, 30, 40, 50, 60, 70, 80);
    figure = &quadangle;
    figure->print_info();

    Rectangle rectangle(10, 20);
    figure = &rectangle;
    figure->print_info();

    Square square(10);
    figure = &square;
    figure->print_info();

    Parallelogram parallelogram(10, 20, 30);
    figure = &parallelogram;
    figure->print_info();

    Rhomb rhomb(10, 30);
    figure = &rhomb;
    figure->print_info();
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.

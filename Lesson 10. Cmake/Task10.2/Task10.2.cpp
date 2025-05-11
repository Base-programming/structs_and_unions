// Task6.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

#include "Figure.h"
#include "Triangle.h"
#include "RightAngledTriangle.h"
#include "IsoscelesTriangle.h"
#include "EquilateralTriangle.h"
#include "Quadangle.h"
#include "Parallelogram.h"
#include "Rectangle.h"
#include "Rhomb.h"
#include "Square.h"


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

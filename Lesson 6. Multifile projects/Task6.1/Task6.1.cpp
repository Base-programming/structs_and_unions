// Task6.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "my_math.h"

enum Action {
    act_add = 1,
    act_sub,
    act_mul,
    act_div,
    act_pow,
};

int main()
{
    int num1, num2;
    int action;

    std::setlocale(LC_ALL, "Russian");

    std::cout << "Введите первое число: ";
    std::cin >> num1;
    std::cout << "Введите второе число: ";
    std::cin >> num2;
    std::cout << "Выберите операцию (1 - сложение, 2 вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень): ";
    std::cin >> action;

    switch (static_cast<Action>(action)) {
    case act_add: std::cout << num1 << " + " << num2 << " = " << add(num1, num2) << std::endl; break;
    case act_sub: std::cout << num1 << " - " << num2 << " = " << substract(num1, num2) << std::endl; break;
    case act_mul: std::cout << num1 << " * " << num2 << " = " << multiply(num1, num2) << std::endl; break;
    case act_div: std::cout << num1 << " / " << num2 << " = " << divide(num1, num2) << std::endl; break;
    case act_pow: std::cout << num1 << " в степени " << num2 << " = " << power(num1, num2) << std::endl; break;
    }

    return EXIT_SUCCESS;
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

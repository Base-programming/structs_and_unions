// Task3.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Calculator {
    
    double num1;
    double num2;

public:

    double add() {
        return num1 + num2;
    }
    double multiply() {
        return num1 * num2;
    }
    double substract_1_2() {
        return num1 - num2;
    }
    double substract_2_1() {
        return num2 - num1;
    }
    double divide_1_2() {
        return num1 / num2;
    }
    double divide_2_1() {
        return num2 / num1;
    }
    bool set_num1(double num1) {
        if (num1 != 0.0) {
            this->num1 = num1;
            return true;
        }
        else {
            return false;
        }
    }
    bool set_num2(double num2) {
        if (num2 != 0.0) {
            this->num2 = num2;
            return true;
        }
        else {
            return false;
        }
    }
};

int main()
{
    double num1, num2;
    bool retval;

    std::setlocale(LC_ALL, "Russian");

    while (true) {

        Calculator calc;

        do {
            std::cout << "Введите num1: ";
            std::cin >> num1;

            if (!(retval = calc.set_num1(num1))) {
                std::cout << "Неверный ввод!" << std::endl;
            }
        } while (!retval);

        do {
            std::cout << "Введите num2: ";
            std::cin >> num2;

            if (!(retval = calc.set_num2(num2))) {
                std::cout << "Неверный ввод!" << std::endl;
            }
        } while (!retval);

        std::cout << "num1 + num2 = " << calc.add() << std::endl;
        std::cout << "num1 * num2 = " << calc.multiply() << std::endl;
        std::cout << "num1 - num2 = " << calc.substract_1_2() << std::endl;
        std::cout << "num2 - num1 = " << calc.substract_2_1() << std::endl;
        std::cout << "num1 / num2 = " << calc.divide_1_2() << std::endl;
        std::cout << "num2 / num1 = " << calc.divide_2_1() << std::endl;
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

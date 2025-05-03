// Task6.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>
#include "counter.h"

enum command_init {
    INIT_ERR,
    INIT_DEFAULT,
    INIT_PARAM
};

void cmd_cycle(Counter& counter)
{
    char command;
    do {
        std::cout << "Введите команду ('+', '-', '=' или 'x'): ";
        std::cin >> command;
        switch (command) {
        case '+': counter.increment(); break;
        case '-': counter.decrement(); break;
        case '=': std::cout << counter.get_value() << std::endl; break;
        }
    } while (command != 'x');

}

int main()
{
    std::setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    std::string command;
    command_init flag_init = INIT_ERR;

    do {
        std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
        std::cin >> command;

        if (command == "да") {
            flag_init = INIT_PARAM;
        }
        else if (command == "нет") {
            flag_init = INIT_DEFAULT;
        }
    } while (flag_init == INIT_ERR);

    if (flag_init == INIT_PARAM)
    {
        int value;
        std::cout << "Введите начальное значение счетчика: ";
        std::cin >> value;
        Counter counter(value);

        cmd_cycle(counter);
    }
    else {
        Counter counter;

        cmd_cycle(counter);
    }

    std::cout << "До свидания!" << std::endl;

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

// Task1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

enum class Months {
    January = 1,
    February,
    March,
    April,
    May,
    June,
    July,
    August,
    September,
    October,
    November,
    December
};


int main()
{
    Months month_number;
    int number;

    std::setlocale(LC_ALL, "Russian");
    do {
        std::cout << "Введите номер месяца: ";
        std::cin >> number;
        month_number = static_cast<Months>(number);
        if (number)
        {
            switch (month_number) {
            case Months::January:   std::cout << "Январь" << std::endl; break;
            case Months::February:  std::cout << "Февраль" << std::endl; break;
            case Months::March:     std::cout << "Март" << std::endl; break;
            case Months::April:     std::cout << "Апрель" << std::endl; break;
            case Months::May:       std::cout << "Май" << std::endl; break;
            case Months::June:      std::cout << "Июнь" << std::endl; break;
            case Months::July:      std::cout << "Июль" << std::endl; break;
            case Months::August:    std::cout << "Август" << std::endl; break;
            case Months::September: std::cout << "Сентябрь" << std::endl; break;
            case Months::October:   std::cout << "Октябрь" << std::endl; break;
            case Months::November:  std::cout << "Ноябрь" << std::endl; break;
            case Months::December:  std::cout << "Декабрь" << std::endl; break;
            default: std::cout << "Неправильный номер!" << std::endl;
            }
        }
    } while (number);

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

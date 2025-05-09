// Task8.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <Windows.h>

class CheckStringException : public std::exception
{
public:
    const char* what() const override { return "Вы ввели слово запретной длины! До свидания"; }
};

int function(std::string str, int forbidden_length) {
    if (str.length() != forbidden_length)
    {
        return str.length();
    }
    else throw CheckStringException();
}

int main()
{
    int forbidden_length;
    std::string str;

    std::setlocale(LC_ALL, "Russian");
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);

    std::cout << "Введите запретную длину: ";
    std::cin >> forbidden_length;

    while (true) {
        std::cout << "Введите слово: ";
        std::cin >> str;

        try {
            std::cout << "Длина слова " << str << " равна: " << function(str, forbidden_length) << std::endl;
        }
        catch (const CheckStringException& ex) { std::cout << ex.what() << std::endl; break; }
        catch (...) { std::cout << "Неизвестная ошибка" << std::endl; break; }
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

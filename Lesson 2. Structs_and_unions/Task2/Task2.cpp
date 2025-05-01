// Task2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

struct bank_account {
    int account_number{};
    std::string owner_name;
    double balance{};
};

void update_summ(bank_account& account, double new_balance) {
    account.balance = new_balance;
}

int main()
{
    bank_account account;
    double new_balance{};

    std::setlocale(LC_ALL, "Russian");

    std::cout << "Введите номер счета: ";
    std::cin >> account.account_number;
    std::cout << "Введите имя владельца: ";
    std::cin >> account.owner_name;
    std::cout << "Введите баланс: ";
    std::cin >> account.balance;
    std::cout << "Введите новый баланс: ";
    std::cin >> new_balance;

    update_summ(account, new_balance);

    std::cout << "Ваш счет: " << account.owner_name << ", " << account.account_number << ", " << account.balance << std::endl;

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

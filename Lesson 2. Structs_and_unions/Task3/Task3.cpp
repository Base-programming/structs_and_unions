// Task3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

struct st_address {
    std::string city;
    std::string street;
    int house_number;
    int apartment_number;
    int index;
};

void struct_out(st_address &address) {
    std::cout << "Город: " << address.city << std::endl;
    std::cout << "Улица: " << address.street << std::endl;
    std::cout << "Номер дома: " << address.house_number << std::endl;
    std::cout << "Номер квартиры: " << address.apartment_number << std::endl;
    std::cout << "Индекс: " << address.index << std::endl;
    std::cout << std::endl;
}

int main()
{
    st_address address1 = { "Москва", "Арбат", 1, 25, 123456 };
    st_address address2 = { "Санкт-Петербург", "Невский проспект", 100, 3, 654321};

    std::setlocale(LC_ALL, "Russian");

    struct_out(address1);
    struct_out(address2);

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

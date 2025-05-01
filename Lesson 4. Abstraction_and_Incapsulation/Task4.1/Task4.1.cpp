// Task4.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <string>

class Address {
    std::string city;
    std::string street;
    int house_number{};
    int apartment_number{};

public:
    void address_out(std::ofstream &file_out) {
        file_out << city << ", " << street << ", " << house_number << ", " << apartment_number << std::endl;
    }
    void set_city(std::string city){
        this->city = city;
    }
    void set_street(std::string street) {
        this->street = street;
    }
    void set_house_number(int number) {
        this->house_number = number;
    }
    void set_appartment_number(int number) {
        this->apartment_number = number;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");

    std::ifstream file_in{ "../in.txt" };
    if (file_in.is_open()) {
        std::cout << "File in is opened\n";

        std::string line;
        if (std::getline(file_in, line)) {
            int obj_cnt = std::stoi(line);
            Address* address_objs = new Address[obj_cnt];
            for (int i = 0; i < obj_cnt; i++) {
                if (std::getline(file_in, line)) {
                    address_objs[i].set_city(line);
                }
                if (std::getline(file_in, line)) {
                    address_objs[i].set_street(line);
                }
                if (std::getline(file_in, line)) {
                    address_objs[i].set_house_number(std::stoi(line));
                }
                if (std::getline(file_in, line)) {
                    address_objs[i].set_appartment_number(std::stoi(line));
                }
            }

            std::ofstream file_out{ "../out.txt" };

            if (file_out.is_open()) {
                std::cout << "File out is opened\n";

                file_out << obj_cnt << std::endl;
                for (int i = 0; i < obj_cnt; i++) {
                    address_objs[i].address_out(file_out);
                }

                file_out.close();
            }
            else {
                std::cout << "File out is not opened\n";
            }

            delete[] address_objs;
            file_in.close();
        }
    }
    else {
        std::cout << "File is not opened\n";
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

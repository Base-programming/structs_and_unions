// Task5.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Figure {

private:
    int sides{};

protected:
    Figure(int setSides) : sides(setSides) {};
    std::string name{ "Фигура" };

public:
    Figure() {};
    int get_number_of_sides() {
        return sides;
    }
    void output() {
        std::cout << name << ": " << sides << std::endl;
    }
};

class Triangle : public Figure {

public:
    Triangle() : Figure(3) {
        name = "Треугольник";
    };
};

class Rectangle : public Figure {

public:

    Rectangle() : Figure(4) {
        name = "Четырехугольник";
    };
};

int main()
{
    std::setlocale(LC_ALL, "Russian");

    Figure figure;
    Triangle triangle;
    Rectangle rectangle;

    std::cout << "Количество сторон:" << std::endl;

    figure.output();
    triangle.output();
    rectangle.output();
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

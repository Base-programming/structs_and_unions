#include <iostream>
#include <Windows.h>

int main() {
	std::string name;
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	std::setlocale(LC_ALL, "Russian");
	std::cout << "Введите имя: ";
	std::cin >> name;
	std::cout << "Здравствуйте, " << name << "!" << std::endl;

	return EXIT_SUCCESS;
}
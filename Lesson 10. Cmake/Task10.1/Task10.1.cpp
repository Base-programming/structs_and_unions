#include <iostream>
#include <Windows.h>

int main() {
	std::string name;
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	std::setlocale(LC_ALL, "Russian");
	std::cout << "������� ���: ";
	std::cin >> name;
	std::cout << "������������, " << name << "!" << std::endl;

	return EXIT_SUCCESS;
}
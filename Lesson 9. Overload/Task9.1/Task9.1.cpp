// Task9.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Fraction
{
private:
	int numerator_;
	int denominator_;

	double to_decimal() {
		double decimal = static_cast<double>(numerator_) / static_cast<double>(denominator_);
		return decimal;
	}

public:
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}
	bool operator==(Fraction fract_right) {
		return ((std::abs(to_decimal() - fract_right.to_decimal()) <= std::numeric_limits<double>::epsilon()) ? true : false);
	}
	bool operator!=(Fraction fract_right) {
		return (!(*this == fract_right));
	}
	bool operator<(Fraction fract_right) {
		return ((to_decimal() < fract_right.to_decimal()) ? true : false);
	}
	bool operator>(Fraction fract_right) {
		return (fract_right < *this);
	}
	bool operator<=(Fraction fract_right) {
		return !(*this > fract_right);
	}
	bool operator>=(Fraction fract_right) {
		return !(*this < fract_right);
	}
};

int main()
{
	Fraction f1(4, 3);
	Fraction f2(6, 11);

	std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
	std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
	std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
	std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
	std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
	std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
	return 0;
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

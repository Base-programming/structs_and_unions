// Task9.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
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

	unsigned int greatest_common_divisor(unsigned int a, unsigned int b) {
		if (a % b == 0)
			return b;
		if (b % a == 0)
			return a;
		if (a > b)
			return greatest_common_divisor(a % b, b);
		return greatest_common_divisor(a, b % a);
	}
	void simplify() {
		int gcd = greatest_common_divisor(std::abs(numerator_), std::abs(denominator_));
		numerator_ /= gcd;
		denominator_ /= gcd;
		if (denominator_ < 0) {
			denominator_ *= -1;
			numerator_ *= -1;
		}
	}

public:
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
		simplify();
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

	friend std::ostream& operator<<(std::ostream& os, const Fraction& fraction);

	Fraction operator+(const Fraction& fract_right) {
		Fraction fraction(this->numerator_ * fract_right.denominator_ + fract_right.numerator_ * this->denominator_,
			this->denominator_ * fract_right.denominator_);
		return fraction;
	}
	Fraction operator-(const Fraction& fract_right) {
		Fraction fraction(this->numerator_ * fract_right.denominator_ - fract_right.numerator_ * this->denominator_,
			this->denominator_ * fract_right.denominator_);
		return fraction;
	}
	Fraction operator*(const Fraction& fract_right) {
		Fraction fraction(this->numerator_ * fract_right.numerator_,
			this->denominator_ * fract_right.denominator_);
		return fraction;
	}
	Fraction operator/(const Fraction& fract_right) {
		Fraction fraction(this->numerator_ * fract_right.denominator_,
			this->denominator_ * fract_right.numerator_);
		return fraction;
	}
	Fraction& operator++() {
		this->numerator_ += this->denominator_;
		return *this;
	}
	Fraction& operator--() {
		this->numerator_ -= this->denominator_;
		return *this;
	}
	Fraction operator++(int) {
		Fraction temp = *this;
		++(*this);
		return temp;
	}
	Fraction operator--(int) {
		Fraction temp = *this;
		--(*this);
		return temp;
	}
};

std::ostream& operator<<(std::ostream& os, const Fraction& fraction) {
	os << fraction.numerator_ << "/" << fraction.denominator_;
	return os;
}

int main()
{
	int numerator1, denominator1, numerator2, denominator2;

	std::setlocale(LC_ALL, "Russian");

	std::cout << "Введите числитель дроби 1: ";
	std::cin >> numerator1;
	std::cout << "Введите знаменатель дроби 1: ";
	std::cin >> denominator1;
	std::cout << "Введите числитель дроби 2: ";
	std::cin >> numerator2;
	std::cout << "Введите знаменатель дроби 2: ";
	std::cin >> denominator2;

	Fraction f1(numerator1, denominator1);
	Fraction f2(numerator2, denominator2);

	std::cout << f1 << " + " << f2 << " = " << f1 + f2 << std::endl;
	std::cout << f1 << " - " << f2 << " = " << f1 - f2 << std::endl;
	std::cout << f1 << " * " << f2 << " = " << f1 * f2 << std::endl;
	std::cout << f1 << " / " << f2 << " = " << f1 / f2 << std::endl;
	std::cout << "++" << f1 << " * " << f2 << " = ";
	std::cout << (++f1) * f2 << std::endl;
	std::cout << "Значение дроби 1 = " << f1 << std::endl;
	std::cout << f1 << "--" << " * " << f2 << " = ";
	std::cout << (f1--) * f2 << std::endl;
	std::cout << "Значение дроби 1 = " << f1 << std::endl;
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

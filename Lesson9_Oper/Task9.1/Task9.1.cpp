// Task9.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Fraction
{
private:
	int numerator_;
	int denominator_;
	int denominator12_ = 0;
	int denominator21_ = 0;

	void sravDroby(const Fraction& other)
	{
		denominator12_ = this->numerator_ * other.denominator_;
		denominator21_ = other.numerator_ * this->denominator_;
	}

public:
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}
	bool operator == (const Fraction& other)
	{
		sravDroby(other);
		return denominator12_ == Fraction::denominator21_;
	}

	bool operator != (const Fraction& other)
	{
		return denominator12_ != denominator21_;
	}

	bool operator < (const Fraction& other)
	{
		return denominator12_ < denominator21_;
	}

	bool operator > (const Fraction& other)
	{
		return denominator12_ > denominator21_;
	}

	bool operator <= (const Fraction& other)
	{
		return denominator12_ <= denominator21_;
	}

	bool operator >= (const Fraction& other)
	{
		return denominator12_ >= denominator21_;
	}
};

int main()
{
	Fraction f1(3, 12);
	Fraction f2(3, 11);

	std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
	std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
	std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
	std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
	std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
	std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
	return 0;
}
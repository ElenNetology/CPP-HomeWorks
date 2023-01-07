// Task9.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Fraction
{
private:
	int numerator_;
	int denominator_;
	
	/*void sravDroby(const Fraction& other)
	{
		denominator12_ = this->numerator_ * other.denominator_;
		denominator21_ = other.numerator_ * this->denominator_;
	}*/
public:
	Fraction(int numerator = 0, int denominator = 1) :
		numerator_(numerator), denominator_(denominator) {}

	double value() 
	{
		return double(numerator_) / denominator_;
	}

	bool operator==(const Fraction& other) 
	{
		return numerator_ == other.numerator_ && denominator_ == other.denominator_;
	}
	bool operator != (const Fraction& other) 
	{
		return !(*this == other);
	}

	bool operator > (const Fraction& other) 
	{
		return (double(numerator_) / denominator_) > (double(other.numerator_) / other.denominator_);
	}
	bool operator < (const Fraction& other) 
	{
		return (double(numerator_) / denominator_) < (double(other.numerator_) / other.denominator_);
	}
	bool operator >= (const Fraction& other) 
	{
		return *this > other || *this == other;
	}
	
	bool operator <= (const Fraction& other) 
	{
		return *this < other || *this == other;
	}
};

int main()
{
	Fraction f1(1, 5);
	Fraction f2(2, 11);

	std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
	std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
	std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
	std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
	std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
	std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
	return 0;
}
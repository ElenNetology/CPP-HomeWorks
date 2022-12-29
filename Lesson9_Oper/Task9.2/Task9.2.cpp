// Task9.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>

class Fraction
{
private:
	int numerator_ = 0;
	int denominator_ = 0;

	int Nod(int numerator, int denominator)
	{
		numerator = abs(numerator);
		denominator = abs(denominator);

		while (numerator > 0 && denominator > 0)

			if (numerator > denominator) numerator %= denominator;
			else
				denominator %= numerator;

		return numerator + denominator;
	}

public:
	Fraction() = default ;
	Fraction(int numerator, int denominator)
	{
		numerator_ = numerator;
		denominator_ = denominator;
	}

	Fraction operator + (const Fraction& other) //Сложение дробей
	{
		Fraction t;

		t.numerator_ = ((this->numerator_ * other.denominator_) + (other.numerator_ * this->denominator_));
		t.denominator_ = (this->denominator_ * other.denominator_);

		int gsd = Nod(t.numerator_, t.denominator_);

		t.numerator_ = t.numerator_ / gsd;
		t.denominator_ = t.denominator_ / gsd;

		return t;
	}

	Fraction operator - (const Fraction& other) //Вычитание дробей
	{
		Fraction t;

		t.numerator_ = ((this->numerator_ * other.denominator_) - (other.numerator_ * this->denominator_));
		t.denominator_ = (this->denominator_ * other.denominator_);

		int gsd = Nod(t.numerator_, t.denominator_);

		t.numerator_ = t.numerator_ / gsd;
		t.denominator_ = t.denominator_ / gsd;

		return t;
	}

	Fraction operator * (const Fraction& other) //Умножение дробей
	{
		Fraction t;

		t.numerator_ = this->numerator_ * other.denominator_;
		t.denominator_ = this->denominator_ * other.numerator_;

		int gsd = Nod(t.numerator_, t.denominator_);

		t.numerator_ = t.numerator_ / gsd;
		t.denominator_ = t.denominator_ / gsd;

		return t;
	}

	Fraction operator / (const Fraction& other) //Деление дробей
	{
		Fraction t;

		t.numerator_ = this->numerator_ * other.denominator_;
		t.denominator_ = this->denominator_ * other.numerator_;

		int gsd = Nod(t.numerator_, t.denominator_);

		t.numerator_ = t.numerator_ / gsd;
		t.denominator_ = t.denominator_ / gsd;

		return t;
	}

	Fraction& operator++ () //Инкремент префиксный 
	{
		this->numerator_ = this->numerator_ + this->denominator_;

		int gsd = Nod(this->numerator_, this->denominator_);

		this->numerator_ = this->numerator_ / gsd;
		this->denominator_ = this->denominator_ / gsd;

		return *this;
	}

	Fraction operator++ (int) //Инкремент постфиксный 
	{
		Fraction t = *this;

		this->numerator_ = this->numerator_ + this->denominator_;

		int gsd = Nod(this->numerator_, this->denominator_);

		this->numerator_ = this->numerator_ / gsd;
		this->denominator_ = this->denominator_ / gsd;

		return t;
	}

	Fraction& operator-- () //Декремент префиксный 
	{
		this->numerator_ = this->numerator_ - this->denominator_;

		int gsd = Nod(this->numerator_, this->denominator_);

		this->numerator_ = this->numerator_ / gsd;
		this->denominator_ = this->denominator_ / gsd;

		return *this;
	}

	Fraction operator-- (int) //Декремент постфиксный 
	{
		Fraction t = *this;

		//++(*this);
		this->numerator_ = this->numerator_ - this->denominator_;

		int gsd = Nod(this->numerator_, this->denominator_);

		this->numerator_ = this->numerator_ / gsd;
		this->denominator_ = this->denominator_ / gsd;

		return t;
	}

	friend std::ostream& operator << (std::ostream& o, const Fraction& f);
};

std::ostream& operator << (std::ostream& o, const Fraction& f)
{
	if (f.denominator_ == 1)
		o << f.numerator_;
	else
		o << f.numerator_ << "/" << f.denominator_;

	return o;
}

int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Russian"); 
	system("chcp 1251");
	std::cout << std::endl;

	int num1 = 1;
	int denom1 = 1;
	int num2 = 1;
	int denom2 = 1;

	std::cout << "Введите числитель дроби 1: ";
	std::cin >> num1;
	std::cout << "Введите знаменатель дроби 1: ";
	std::cin >> denom1;

	std::cout << "Введите числитель дроби 2: ";
	std::cin >> num2;
	std::cout << "Введите знаменатель дроби 2: ";
	std::cin >> denom2;

	Fraction f1(num1, denom1);
	Fraction f2(num2, denom2);

	std::cout << f1 << " + " << f2 << " = " << f1 + f2 << std::endl;
	std::cout << f1 << " - " << f2 << " = " << f1 - f2 << std::endl;
	std::cout << f1 << " * " << f2 << " = " << f1 * f2 << std::endl;
	std::cout << f1 << " / " << f2 << " = " << f1 / f2 << std::endl;
	std::cout <<  std::endl;
	std::cout << "++" << ++f1 << " * " << f2 << " = " << f1 * f2 << std::endl;
	std::cout << "--" << --f1 << " * " << f2 << " = " << f1 * f2 << std::endl;
	std::cout << "Значение дроби 1 = " << f1 << std::endl;
	std::cout <<  std::endl;
	std::cout << f1++ << "++" << " * " << f2 << " = " << f1 * f2 << std::endl;
	std::cout << f1-- << "--" << " * " << f2 << " = " << f1 * f2 << std::endl;
	std::cout << "Значение дроби 2 = " << f2 << std::endl;
	std::cout <<  std::endl;

	return 0;
}
// Task5.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

class Figure
{
protected:
	std::string Shape = "Фигура";
	bool checkF = false;
	int NumberSide = 0;
	int A = 0;
	int B = 0;
	int C = 0;
	int D = 0;
	int AngA = 0;
	int AngB = 0;
	int AngC = 0;
	int AngD = 0;

	virtual bool CheckF() //Проверка количества сторон 
	{
		if (NumberSide == 0)
		{
			return true;
		}
		else
		{
			return false;
		}
	};
public:
	std::string getFigure() { return Shape; }
	int getA() { return A; }
	int getB() { return B; }
	int getC() { return C; }
	int getD() { return D; }
	int getAngA() { return AngA; }
	int getAngB() { return AngB; }
	int getAngC() { return AngC; }
	int getAngD() { return AngD; }

	virtual void printinfo()
	{
		std::cout << std::endl;
		std::cout << Shape << ":" << std::endl;
		if (CheckF())
		{
			std::cout << "Правильная" << std::endl;
		}
		else {
			std::cout << "Неправильная" << std::endl;
		}

		std::cout << "Количество сторон: " << NumberSide << std::endl;
	}
};
class Triangle : public Figure //Класс треугольника
{
protected:
	bool CheckF() override {
		if ((AngA + AngB + AngC) == 180)
		{
			return true;
		}
		else {
			return false;
		}
	};
public:
	Triangle(int sideA, int sideB, int sideC, int angA, int angB, int angC)
	{
		Shape = "Треугольник";
		A = sideA;
		B = sideB;
		C = sideC;
		AngA = angA;
		AngB = angB;
		AngC = angC;
		NumberSide = 3;
		checkF = CheckF();
	}
	void printinfo() override
	{
		Figure::printinfo();
		std::cout << "Стороны: ";
		std::cout << " a = " << getA() << ", b = " << getB() << ", с = " << getC();
		std::cout << std::endl;
		std::cout << "Углы: ";
		std::cout << " А = " << getAngA() << ", В = " << getAngB() << ", С = " << getAngC();
		std::cout << std::endl;
	}
};
class rightTr : public Triangle
{
protected:
	bool CheckF() override
	{
		if (Triangle::CheckF() && (AngC == 90))
		{
			return true;
		}
		else
		{
			return false;
		};
	};
public:
	rightTr(int sideA, int sideB, int sideC, int angA, int angB, int angC)
		: Triangle(sideA, sideB, sideC, angA, angB, angC)
	{
		Triangle::Shape = "Прямоугольный треугольник";
	};
};
class isoscelesTr : public Triangle
{
protected:
	bool CheckF() override
	{
		if (Triangle::CheckF() && (A == C && AngA == AngC))
		{
			return true;
		}
		else
		{
			return false;
		};
	};
public:
	isoscelesTr(int sideA, int sideB, int sideC, int angA, int angB, int angC)
		: Triangle(sideA, sideB, sideC, angA, angB, angC)
	{
		Triangle::Shape = "Равнобедренный треугольник";
	};
};
class equilateralTr : public Triangle
{
private:
	bool Check_eqTr()
	{
		if ((A == B && B == C) && ((AngA == 60) && (AngA = 60) && (AngC = 60)))
		{
			return true;
		}
		else
		{
			return false;
		};
	}
public:
	equilateralTr(int sideA, int sideB, int sideC, int angA, int angB, int angC)
		: Triangle(sideA, sideB, sideC, angA, angB, angC)
	{
		Triangle::Shape = "Равносторонний треугольник";
	};
protected:
	bool CheckF() override
	{
		if (Triangle::CheckF() && (Check_eqTr()))
		{
			return true;
		}
		else {
			return false;
		};
	};
};
class Quadrangle : public Figure
{
protected:
	bool CheckF() override
	{
		if ((AngA + AngB + AngC + AngD) == 360)
		{
			return true;
		}
		else {
			return false;
		}
	};
	bool CheckSide()
	{
		if (A == C && B == D)
		{
			return true;
		}
		else {
			return false;
		}
	};
	bool CheckSideABCD()
	{
		if (A == B && B == C && C == D)
		{
			return true;
		}
		else {
			return false;
		}
	};
	bool CheckAng()
	{
		if (AngA == AngB == AngC == AngD == 90)
		{
			return true;
		}
		else {
			return false;
		}
	};
	bool CheckAngACBD()
	{
		if (AngA == AngC && AngB == AngD)
		{
			return true;
		}
		else {
			return false;
		}
	};
public:
	Quadrangle(int sideA, int sideB, int sideC, int sideD, int angA, int angB, int angC, int angD)
	{
		Shape = "Четырехугольник";
		NumberSide = 4;
		A = sideA;
		B = sideB;
		C = sideC;
		D = sideD;
		AngA = angA;
		AngB = angB;
		AngC = angC;
		AngD = angD;
	}
	void printinfo() override
	{
		Figure::printinfo();
		std::cout << "Стороны: ";
		std::cout << " a = " << getA() << ", b = " << getB() << ", с = " << getC();
		std::cout << ", d = " << getD() << std::endl;
		std::cout << "Углы: ";
		std::cout << " А = " << getAngA() << ", В = " << getAngB() << ", С = " << getAngC();
		std::cout << ", D = " << getAngD() << std::endl;
	}
};
class Rect : public Quadrangle
{
protected:
	bool CheckF() override
	{
		if (Quadrangle::CheckF() && Quadrangle::CheckSide() && Quadrangle::CheckAng())
		{
			return true;
		}
		else {
			return false;
		}
	};
public:
	Rect(int sideA, int sideB, int sideC, int sideD, int angA, int angB, int angC, int angD)
		: Quadrangle(sideA, sideB, sideC, sideD, angA, angB, angC, angD)
	{
		Quadrangle::Shape = "Прямоугольник";
	}
};

class Box : public Quadrangle
{
protected:
	bool CheckF() override
	{
		if (Quadrangle::CheckF() && Quadrangle::CheckSide() && Quadrangle::CheckAng())
		{
			return true;
		}
		else {
			return false;
		}
	}
public:
	Box(int sideA, int sideB, int sideC, int sideD, int angA, int angB, int angC, int angD)
		: Quadrangle(sideA, sideB, sideC, sideD, angA, angB, angC, angD)
	{
		Quadrangle::Shape = "Квадрат";
	}
};
class Parallelogram : public Quadrangle
{
protected:
	bool CheckF() override
	{
		if (Quadrangle::CheckF() && Quadrangle::CheckSide() && Quadrangle::CheckAngACBD())
		{
			return true;
		}
		else {
			return false;
		}
	}
public:
	Parallelogram(int sideA, int sideB, int sideC, int sideD, int angA, int angB, int angC, int angD)
		: Quadrangle(sideA, sideB, sideC, sideD, angA, angB, angC, angD)
	{
		Quadrangle::Shape = "Параллелограмм";
	}
};
class Romb : public Quadrangle
{
protected:
	bool CheckF() override
	{
		if (Quadrangle::CheckF() && Quadrangle::CheckSide() && Quadrangle::CheckAngACBD())
		{
			return true;
		}
		else {
			return false;
		}
	}
public:
	Romb(int sideA, int sideB, int sideC, int sideD, int angA, int angB, int angC, int angD)
		: Quadrangle(sideA, sideB, sideC, sideD, angA, angB, angC, angD)
	{
		Quadrangle::Shape = "Ромб";
	}
};
void printinfo(Figure& figure)
{
	figure.printinfo();
}

int main()
{
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");
	Figure Figure1;
	Triangle Tri1(15, 22, 38, 40, 55, 34);
	rightTr rightTr1(10, 10, 30, 60, 40, 80);
	isoscelesTr isoscelesTr1(30, 30, 30, 60, 40, 80);
	equilateralTr equilateralTr1(10, 10, 10, 60, 30, 90);
	Quadrangle Quadrangle1(5, 8, 10, 41, 15, 35, 98, 50);
	Rect Rect1(20, 10, 5, 10, 30, 30, 150, 150);
	Box Box1(50, 50, 50, 50, 90, 90, 90, 90);
	Parallelogram Parallelogram1(5, 8, 10, 41, 15, 35, 98, 50);
	Romb Romb1(5, 8, 10, 10, 15, 35, 98, 50);
	printinfo(Figure1);
	printinfo(Tri1);
	printinfo(rightTr1);
	printinfo(isoscelesTr1);
	printinfo(equilateralTr1);
	printinfo(Quadrangle1);
	printinfo(Rect1);
	printinfo(Box1);
	printinfo(Parallelogram1);
	printinfo(Romb1);
}
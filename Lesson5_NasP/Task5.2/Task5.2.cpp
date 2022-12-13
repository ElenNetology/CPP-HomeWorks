// Task5.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

class Figure // класс фигура
{
protected:
	std::string Figure;
	bool FSide = false;
	int A = 0;
	int B = 0;
	int C = 0;
	int D = 0;
	int AngA = 0;
	int AngB = 0;
	int AngC = 0;
	int AngD = 0;
public:
	std::string getFigure() { return Figure; }
	int getFSide() { return FSide; }
	int getA() { return A; }
	int getB() { return B; }
	int getC() { return C; }
	int getD() { return D; }
	int getAngA() { return AngA; }
	int getAngB() { return AngB; }
	int getAngC() { return AngC; }
	int getAngD() { return AngD; }
};

class Triangle : public Figure //Класс треугольник
{
public:
	Triangle(int sideA, int sideB, int sideC, int angA, int angB, int angC)
	{
		Figure = "Треугольник";
		A = sideA;
		B = sideB;
		C = sideC;
		AngA = angA;
		AngB = angB;
		AngC = angC;
	}
};
class rightTr : public Triangle
{
public:
	rightTr(int sideA, int sideB, int sideC, int angA, int angB)
		: Triangle(sideA, sideB, sideC, angA, angB, 90)
	{
		Triangle::Figure = "Прямоугольный треугольник";
	};
};
class isoscelesTr : public Triangle
{
public:
	isoscelesTr(int sideA, int sideB, int sideC, int angA, int angB)
		: Triangle(sideA, sideB, sideC, angA, angB, angA)
	{
		Triangle::Figure = "Равнобедренный треугольник";
	};
};
class equilateralTr : public Triangle
{
public:
	equilateralTr(int sideA) : Triangle(sideA, sideA, sideA, 60, 60, 60)
	{
		Triangle::Figure = "Равносторонний треугольник";
	};
};
class Quadrangle : public Figure // класс четырехугольник
{
public:
	Quadrangle(int sideA, int sideB, int sideC, int sideD, int angA, int angB, int angC, int angD)
	{
		Figure = "Четырехугольник";
		FSide = true;
		A = sideA;
		B = sideB;
		C = sideC;
		D = sideD;
		AngA = angA;
		AngB = angB;
		AngC = angC;
		AngD = angD;
	}
};
class Rect : public Quadrangle
{
public:
	Rect(int sideA, int sideB)
		: Quadrangle(sideA, sideB, sideA, sideB, 90, 90, 90, 90)
	{
		Quadrangle::Figure = "Прямоугольник";
	};
};
class Box : public Quadrangle
{
public:
	Box(int sideA)
		: Quadrangle(sideA, sideA, sideA, sideA, 90, 90, 90, 90)
	{
		Quadrangle::Figure = "Квадрат";
	}
};
class Parallelogram : public Quadrangle
{
public:
	Parallelogram(int sideA, int sideB, int angA, int angB)
		: Quadrangle(sideA, sideB, sideA, sideB, angA, angB, angA, angB)
	{
		Quadrangle::Figure = "Параллелограмм";
	}
};
class Romb : public Quadrangle
{
public:
	Romb(int sideA, int angA, int angB)
		: Quadrangle(sideA, sideA, sideA, sideA, angA, angB, angA, angB)
	{
		Quadrangle::Figure = "Ромб";
	}
};
void printinfo(Figure& figure)
{
	std::cout << std::endl;
	std::cout << figure.getFigure() << ":" << std::endl;
	std::cout << "Стороны:";
	std::cout << " a = " << figure.getA() << ", b = " << figure.getB() << ", с = " << figure.getC();
	if (figure.getFSide())
	{
		std::cout << ", d = " << figure.getD() << std::endl;
	}
	else {
		std::cout << std::endl;
	}
	std::cout << "Углы:";
	std::cout << " А = " << figure.getAngA() << ", В = " << figure.getAngB() << ", С = " << figure.getAngC();
	if (figure.getFSide()) { std::cout << ", D = " << figure.getAngD() << std::endl; }
	else { std::cout << std::endl; }
}
int main()
{
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");
	Triangle Tri1(15, 22, 38, 40, 50, 60);
	rightTr rightTr1(10, 20, 30, 40, 50);
	isoscelesTr isoscelesTr1(11, 110, 75, 40, 55);
	equilateralTr equilateralTr1(111);
	Quadrangle Quadrangle1(5, 8, 10, 41, 15, 35, 98, 110);
	Rect Rect1(14, 24);
	Box Box1(50);
	Parallelogram Parallelogram1(40, 50, 25, 74);
	Romb Romb1(14, 24, 34);
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
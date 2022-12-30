#include "rightTr.h"
#include "Exception.h"

rightTr::rightTr(int sideA, int sideB, int sideC, int angA, int angB, int angC)
	: Triangle(sideA, sideB, sideC, angA, angB, angC)
{
	Triangle::Shape = "Прямоугольный треугольник";
	if (angC != 90)
	{
		throw Exception("Угол С не равен 90");
	}

};

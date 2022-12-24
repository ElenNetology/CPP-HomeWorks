#include "rightTr.h"

rightTr::rightTr(int sideA, int sideB, int sideC, int angA, int angB)
	: Triangle(sideA, sideB, sideC, angA, angB, 90)
{
	Triangle::Shape = "Прямоугольный треугольник";
};

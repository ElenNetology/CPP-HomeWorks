#include "isoscelesTr.h"

isoscelesTr::isoscelesTr(int sideA, int sideB, int sideC, int angA, int angB)
	: Triangle(sideA, sideB, sideC, angA, angB, angA)
{
	Triangle::Shape = "Равнобедренный треугольник";
};

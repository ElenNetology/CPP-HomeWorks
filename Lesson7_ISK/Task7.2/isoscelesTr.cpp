#include "isoscelesTr.h"
#include "Exception.h"


isoscelesTr::isoscelesTr(int sideA, int sideB, int sideC, int angA, int angB, int angC)
	: Triangle(sideA, sideB, sideC, angA, angB, angC)
{
	Triangle::Shape = "Равнобедренный треугольник";

	if (sideA != sideC && angA != angC)
	{
		throw Exception("Стороны А и С не равны, углы А и С не равны.");
	}

	if (sideA != sideC)
	{
		throw Exception("Стороны А и С не равны");
	}

	if (angA != angC)
	{
		throw Exception("Углы А и С не равны");
	}
};

#include "Rectan.h"
#include "Exception.h"

Rectan::Rectan(int sideA, int sideB, int sideC, int sideD, int angA, int angB, int angC, int angD)
	: Quadrangle(sideA, sideB, sideC, sideD, angA,  angB,  angC,  angD)
{
	Quadrangle::Shape = "Прямоугольник";

	if ((sideA != sideC || sideB != sideD) && (angA != 90 || angB != 90 || angC != 90 || angD != 90))
	{
		throw Exception("Стороны a,c и b,d попарно не равны, все углы не равны 90");
	}

	if (sideA != sideC || sideB != sideD)
	{
		throw Exception("Стороны a,c и b,d попарно не равны");
	}

	if (angA != 90 || angB != 90 || angC != 90 || angD != 90)
	{
		throw Exception("Все углы не равны 90");
	}


};
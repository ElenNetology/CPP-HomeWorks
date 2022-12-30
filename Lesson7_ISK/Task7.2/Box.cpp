#include "Box.h"
#include "Exception.h"

Box::Box(int sideA, int sideB, int sideC, int sideD, int angA, int angB, int angC, int angD)
	: Quadrangle(sideA, sideA, sideA, sideA, angA, angB, angC, angD)
{
	Quadrangle::Shape = "Квадрат";
	if ((sideA != sideB || sideB != sideC|| sideC != sideD)
		&& (angA != 90 || angB != 90 || angC != 90 || angD != 90))
	{
		throw Exception("Все стороны не равны, все углы не равны 90");
	}

	if (sideA != sideB || sideB != sideC || sideC != sideD)
	{
		throw Exception("Все стороны не равны");
	}

	if (angA != 90 || angB != 90 || angC != 90 || angD != 90)
	{
		throw Exception("Все углы не равны 90");
	}
}

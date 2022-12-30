#include "equilateralTr.h"
#include "Exception.h"

equilateralTr::equilateralTr (int sideA, int sideB, int sideC, int angA, int angB, int angC): Triangle(sideA, sideA, sideA, angA, angB, angC)
{
	Triangle::Shape = "Равносторонний треугольник";

	if ((sideA != sideB && sideB != sideC) && (angA != angB && angB != angC))
	{
		throw Exception("Все стороны не равны, все углы не равны 60");
	}

	if (sideA != sideB && sideB != sideC)
	{
		throw Exception("Все стороны не равны");
	}

	if (angA != angB && angB != angC)
	{
		throw Exception("Все углы не равны 60");
	}
};

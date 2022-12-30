#include "Romb.h"
#include "Exception.h"

Romb::Romb(int sideA, int sideB, int sideC, int sideD, int angA, int angB, int angC, int angD)
	: Quadrangle(sideA, sideB, sideC, sideD, angA, angB, angC, angD)
{
	Quadrangle::Shape = "Ромб";

	if ((sideA != sideB || sideB != sideC || sideC != sideD)
		&& (angA != angC || angB != angD))
	{
		throw Exception("Все стороны не равны, углы A,C и B,D попарно не равны");
	}

	if (sideA != sideB || sideB != sideC || sideC != sideD)
	{
		throw Exception("Все стороны не равны");
	}

	if (angA != angC || angB != angD)
	{
		throw Exception("Углы A,C и B,D попарно не равны");
	}
}

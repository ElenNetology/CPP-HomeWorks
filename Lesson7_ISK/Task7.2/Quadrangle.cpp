#include "Quadrangle.h"
#include "Figure.h"
#include "Exception.h"

Quadrangle::Quadrangle(int sideA, int sideB, int sideC, int sideD, int angA, int angB, int angC, int angD)
{
	Shape = "Четырехугольник";
	FSide = true;
	A = sideA;
	B = sideB;
	C = sideC;
	D = sideD;
	AngA = angA;
	AngB = angB;
	AngC = angC;
	AngD = angD;

	if (angA + angB + angC + angD != 360)
	{
		throw Exception("Сумма углов не равна 360");
	}
}
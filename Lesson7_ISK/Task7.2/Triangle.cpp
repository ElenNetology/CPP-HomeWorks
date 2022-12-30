#include "Triangle.h"
#include "Figure.h"
#include "Exception.h"

Triangle::Triangle(int sideA, int sideB, int sideC, int angA, int angB, int angC)
{
	Shape = "Треугольник";
	A = sideA;
	B = sideB;
	C = sideC;
	AngA = angA;
	AngB = angB;
	AngC = angC;
}
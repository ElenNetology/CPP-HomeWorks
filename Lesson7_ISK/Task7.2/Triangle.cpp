#include "Triangle.h"
#include "Figure.h"
#include "Exception.h"

Triangle::Triangle(int sideA, int sideB, int sideC, int angA, int angB, int angC)
{
	Shape = "Треугольник";
	//FSide = true;
	A = sideA;
	B = sideB;
	C = sideC;
	AngA = angA;
	AngB = angB;
	AngC = angC;
	

	if ((angA + angB + angC != 180)|| (sideA == 0)||(sideB ==0)||(sideC == 0))
	{
		throw Exception("Сумма углов не равна 180, количество сторон не равно 3.");
	}
	if (angA + angB + angC != 180)
	{
		throw Exception("Сумма углов не равна 180.");
	}
	if ((sideA == 0) || (sideB == 0) || (sideC == 0))
	{
		throw Exception("Количество сторон не равно 3.");
	}


}
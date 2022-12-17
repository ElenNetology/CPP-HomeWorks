#include "equilateralTr.h"

equilateralTr::equilateralTr(int sideA) : Triangle(sideA, sideA, sideA, 60, 60, 60)
{
	Triangle::Shape = "Равносторонний треугольник";
};

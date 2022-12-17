#include "Parallelogram.h"

Parallelogram::Parallelogram(int sideA, int sideB, int angA, int angB)
	: Quadrangle(sideA, sideB, sideA, sideB, angA, angB, angA, angB)
{
	Quadrangle::Shape = "ֿאנאככוכמדנאלל";
}

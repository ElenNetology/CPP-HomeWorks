#include "Parallelogram.h"
#include "Exception.h"

Parallelogram::Parallelogram(int sideA, int sideB, int sideC, int sideD, int angA, int angB, int angC, int angD)
	: Quadrangle(sideA, sideB, sideC, sideD, angA,angB,angC,angD)
{
	Quadrangle::Shape = "ѕараллелограмм";

	if ((sideA != sideC || sideB != sideD)
		&& (angA != angC || angB != angD))
	{
		throw Exception("Cтороны a,c и b,d не равны попарно, углы A,C и B,D не равны попарно");
	}
		if (sideA != sideC || sideB != sideD)
	{
		throw Exception("Cтороны a,c и b,d не равны попарно");
	}

	if (angA != angC || angB != angD)
	{
		throw Exception("”глы A,C и B,D не равны попарно");
	}

}

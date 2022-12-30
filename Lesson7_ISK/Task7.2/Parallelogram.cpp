#include "Parallelogram.h"
#include "Exception.h"

Parallelogram::Parallelogram(int sideA, int sideB, int sideC, int sideD, int angA, int angB, int angC, int angD)
	: Quadrangle(sideA, sideB, sideC, sideD, angA,angB,angC,angD)
{
	Quadrangle::Shape = "��������������";

	if ((sideA != sideC || sideB != sideD)
		&& (angA != angC || angB != angD))
	{
		throw Exception("C������ a,c � b,d �� ����� �������, ���� A,C � B,D �� ����� �������");
	}
		if (sideA != sideC || sideB != sideD)
	{
		throw Exception("C������ a,c � b,d �� ����� �������");
	}

	if (angA != angC || angB != angD)
	{
		throw Exception("���� A,C � B,D �� ����� �������");
	}

}

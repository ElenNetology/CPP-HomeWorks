#include "Romb.h"
#include "Exception.h"

Romb::Romb(int sideA, int sideB, int sideC, int sideD, int angA, int angB, int angC, int angD)
	: Quadrangle(sideA, sideB, sideC, sideD, angA, angB, angC, angD)
{
	Quadrangle::Shape = "����";

	if ((sideA != sideB || sideB != sideC || sideC != sideD)
		&& (angA != angC || angB != angD))
	{
		throw Exception("��� ������� �� �����, ���� A,C � B,D ������� �� �����");
	}

	if (sideA != sideB || sideB != sideC || sideC != sideD)
	{
		throw Exception("��� ������� �� �����");
	}

	if (angA != angC || angB != angD)
	{
		throw Exception("���� A,C � B,D ������� �� �����");
	}
}

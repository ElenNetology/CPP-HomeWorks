#include "Box.h"
#include "Exception.h"

Box::Box(int sideA, int sideB, int sideC, int sideD, int angA, int angB, int angC, int angD)
	: Quadrangle(sideA, sideA, sideA, sideA, angA, angB, angC, angD)
{
	Quadrangle::Shape = "�������";
	if ((sideA != sideB || sideB != sideC|| sideC != sideD)
		&& (angA != 90 || angB != 90 || angC != 90 || angD != 90))
	{
		throw Exception("��� ������� �� �����, ��� ���� �� ����� 90");
	}

	if (sideA != sideB || sideB != sideC || sideC != sideD)
	{
		throw Exception("��� ������� �� �����");
	}

	if (angA != 90 || angB != 90 || angC != 90 || angD != 90)
	{
		throw Exception("��� ���� �� ����� 90");
	}
}

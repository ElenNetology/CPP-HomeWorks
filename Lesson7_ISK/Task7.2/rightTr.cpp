#include "rightTr.h"
#include "Exception.h"

rightTr::rightTr(int sideA, int sideB, int sideC, int angA, int angB, int angC)
	: Triangle(sideA, sideB, sideC, angA, angB, angC)
{
	Triangle::Shape = "������������� �����������";
	if (angC != 90)
	{
		throw Exception("���� � �� ����� 90");
	}

};

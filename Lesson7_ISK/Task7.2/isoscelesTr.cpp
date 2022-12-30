#include "isoscelesTr.h"
#include "Exception.h"


isoscelesTr::isoscelesTr(int sideA, int sideB, int sideC, int angA, int angB, int angC)
	: Triangle(sideA, sideB, sideC, angA, angB, angC)
{
	Triangle::Shape = "�������������� �����������";

	if (sideA != sideC && angA != angC)
	{
		throw Exception("������� � � � �� �����, ���� � � � �� �����.");
	}

	if (sideA != sideC)
	{
		throw Exception("������� � � � �� �����");
	}

	if (angA != angC)
	{
		throw Exception("���� � � � �� �����");
	}
};

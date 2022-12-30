#include "equilateralTr.h"
#include "Exception.h"

equilateralTr::equilateralTr (int sideA, int sideB, int sideC, int angA, int angB, int angC): Triangle(sideA, sideA, sideA, angA, angB, angC)
{
	Triangle::Shape = "�������������� �����������";

	if ((sideA != sideB && sideB != sideC) && (angA != angB && angB != angC))
	{
		throw Exception("��� ������� �� �����, ��� ���� �� ����� 60");
	}

	if (sideA != sideB && sideB != sideC)
	{
		throw Exception("��� ������� �� �����");
	}

	if (angA != angB && angB != angC)
	{
		throw Exception("��� ���� �� ����� 60");
	}
};

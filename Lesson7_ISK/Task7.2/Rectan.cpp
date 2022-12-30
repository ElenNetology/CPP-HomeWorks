#include "Rectan.h"
#include "Exception.h"

Rectan::Rectan(int sideA, int sideB, int sideC, int sideD, int angA, int angB, int angC, int angD)
	: Quadrangle(sideA, sideB, sideC, sideD, angA,  angB,  angC,  angD)
{
	Quadrangle::Shape = "�������������";

	if ((sideA != sideC || sideB != sideD) && (angA != 90 || angB != 90 || angC != 90 || angD != 90))
	{
		throw Exception("������� a,c � b,d ������� �� �����, ��� ���� �� ����� 90");
	}

	if (sideA != sideC || sideB != sideD)
	{
		throw Exception("������� a,c � b,d ������� �� �����");
	}

	if (angA != 90 || angB != 90 || angC != 90 || angD != 90)
	{
		throw Exception("��� ���� �� ����� 90");
	}


};
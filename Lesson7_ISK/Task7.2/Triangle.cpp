#include "Triangle.h"
#include "Figure.h"
#include "Exception.h"

Triangle::Triangle(int sideA, int sideB, int sideC, int angA, int angB, int angC)
{
	Shape = "�����������";
	//FSide = true;
	A = sideA;
	B = sideB;
	C = sideC;
	AngA = angA;
	AngB = angB;
	AngC = angC;
	

	if ((angA + angB + angC != 180)|| (sideA == 0)||(sideB ==0)||(sideC == 0))
	{
		throw Exception("����� ����� �� ����� 180, ���������� ������ �� ����� 3.");
	}
	if (angA + angB + angC != 180)
	{
		throw Exception("����� ����� �� ����� 180.");
	}
	if ((sideA == 0) || (sideB == 0) || (sideC == 0))
	{
		throw Exception("���������� ������ �� ����� 3.");
	}


}
#include "Centaur.h"
#include "Exception.h"

Centaur::Centaur(int V, int DT, int rest) : GroundTrans(V, DT, rest)
{
	GroundTrans::Vehicle = "�������";

	V = 15;
	DT = 8;
	rest = 2;
}
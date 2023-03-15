#include "Camel.h"
#include "Exception.h"

Camel::Camel(int V, int DT, int rest) : GroundTrans(V, DT, rest)
{
	GroundTrans::Vehicle = "Верблюд";
	V = 10;
	DT = 30;
	if (DT >= 0 && DT <= 30)
		rest = 5;
	else if (DT >= 35)
		rest = 8;
}

#include "CamelRun.h"
#include "Exception.h"

CamelRun::CamelRun(int V, int DT, int rest) : GroundTrans(V, DT, rest)
{
	GroundTrans::Vehicle = "Верблюд-быстроход";

	V = 40;
	DT = 10;
	if (DT >= 0 && DT <= 19)
		rest = 5;
	else if (DT >= 20 && DT <= 29)
		rest = 6.5;
	else if (DT >= 30)
		rest = 8;
}

#include "Allterrboots.h"
#include "Exception.h"

Allterrboots::Allterrboots(int V, int DT, int rest) : GroundTrans(V, DT, rest)
{
	GroundTrans::Vehicle = "Ботинки-вездеходы";
	V = 6;
	DT = 60;
	rest = 10;
	if (DT >= 60)
		rest = 10;
	else if (DT >= 120)
		rest = 5;
}
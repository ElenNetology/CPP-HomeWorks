#include "Eagle.h"
#include "Exception.h"

Eagle::Eagle(int V, int Ratio) : AirTrans (V, Ratio)
{
	AirTrans::Vehicle = "����";
    V = 8;
    Ratio = 0.92;
    }
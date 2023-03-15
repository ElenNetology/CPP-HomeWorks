#include "Broom.h"
#include "Exception.h"

Broom::Broom (int V, int Ratio) : AirTrans(V, Ratio)
{
	AirTrans::Vehicle = "Метла";
    int Dist;
    V = 20;
    Ratio = 1 - ((Dist / static_cast<double>(1000)) / 100);


}
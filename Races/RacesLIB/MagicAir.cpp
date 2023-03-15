// Ковер-самолет
#include "MagicAir.h"
#include "Exception.h"

MagicAir::MagicAir (int V, int Ratio) : AirTrans (V, Ratio)
{
	AirTrans::Vehicle = "Ковер-самолет";
    V = 10;
    int Dist;
    if (Dist < 1000)
        Ratio = 1;
    else if (Dist < 5000 && Dist >= 1000)
        Ratio = 0.97;
    else if (Dist < 10000 && Dist >= 5000)
        Ratio = 0.9;
    else if (Dist >= 10000)
        Ratio = 0.95;
}


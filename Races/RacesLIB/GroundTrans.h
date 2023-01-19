#pragma once
#include "Transport.h"

class GroundTrans :
    public Transport 
{
    GroundTrans(int V, int DrivTime, int Relax, int KoefDistRed);
};


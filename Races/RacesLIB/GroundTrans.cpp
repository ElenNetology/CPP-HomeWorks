// Класс "Наземный транспорт"
#include "Transport.h"
#include "GroundTrans.h"
#include "Exception.h"

GroundTrans::GroundTrans(int V, int DT, int rest)
	
{
	Vehicle = "Наземный транспорт";
	V = Speed;
	DT = DrivTime;
	rest = Relax;
}


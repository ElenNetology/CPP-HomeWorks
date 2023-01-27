#pragma once
#include <string>
class Transport
{
protected:
	std::string Vehicle;
	int Speed = 0;
	int DrivTime = 0;
	int Relax = 0;
	int KoefDistRed = 0;
	
public:
	std::string getVehicle();
	int getSpeed();
	int getDrivTime();
	int getRelax();
	int getKoefDistRed();
	
};



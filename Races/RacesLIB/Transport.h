#pragma once
#include <string>
class Transport
{
protected:
	std::string Vehicle;
	int V = 0;
	int DrivTime = 0;
	int Relax = 0;
	int KoefDistRed = 0;
	
public:
	std::string getVehicle();
	int getV();
	int getDrivTime();
	int getRelax();
	int getKoefDistRed();
	
};



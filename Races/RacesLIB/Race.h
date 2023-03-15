#pragma once
#include <string>

class Race
{
protected:
	std::string Type;
	std::string Vehicle;
public:
	std::string getType();
	std::string getVehicle();
};


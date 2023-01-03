#pragma once
#include <string>
#include <iostream>

class Greeter
{
private:
	std::string greeting;

public:
	Greeter(std::string name);

	std::string greet();
};
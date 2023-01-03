#include "Header.h"
#include <string>


Greeter::Greeter(std::string name)
{
	greeting = "Здравствуйте, " + name + "!";
}

std::string Greeter::greet()
{
	return greeting;
}
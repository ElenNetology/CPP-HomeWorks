#include "Leave.h"
#include <iostream>
#include <string>

Leave::Leave(std::string name)
{
	leaving = "До свидания, " + name + "!";
}

std::string Leave::leave()
{
	return leaving;
}
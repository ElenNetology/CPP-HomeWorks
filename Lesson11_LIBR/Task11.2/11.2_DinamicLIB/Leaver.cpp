#include <iostream>
#include <string>
#include "Header.h"

Leaver::Leaver(std::string name)
{
	leaving = "До свидания, " + name + "!";
}

std::string Leaver::leave()
{
	return leaving;
}
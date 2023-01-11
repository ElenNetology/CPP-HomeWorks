#pragma once
#include <string>

#ifdef DINAMICLIB_EXPORTS
#define DINAMICLIB_API __declspec(dllexport)
#else
#define DINAMICLIB_API __declspec(dllimport)
#endif


class Leaver
{
private:
	std::string leaving;

public:
	Leaver(std::string name);

	std::string leave();
};
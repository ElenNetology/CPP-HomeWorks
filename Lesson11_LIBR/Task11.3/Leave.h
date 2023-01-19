#pragma once
#include <string>

#ifdef DINAMICLIB_EXPORTS
#define DINAMICLIB_API __declspec(dllexport)

#else
#define DINAMICLIB_API __declspec(dllimport)
#endif

class Leave
{
private:
	std::string leaving;

public:
	DINAMICLIB_API Leave(std::string name);

	DINAMICLIB_API std::string leave();
};


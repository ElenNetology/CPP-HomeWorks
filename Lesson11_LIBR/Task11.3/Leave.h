#pragma once
#include <string>

#ifdef DINAMICLIB_EXPORTS
#define DINAMICLIB_EXPORTS

#else
#define DINAMICLIB_EXPORTS
#endif

class Leave
{
private:
	std::string leaving;

public:
	 Leave(std::string name);

	std::string leave();
};


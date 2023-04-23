#pragma once
#include <iostream>

class NumCount
{
private:
	int count_ = 0;
	int sum_ = 0;

public:
	NumCount() = default;

	void operator ()(int var);
	int getSum();
	int getCount();


};


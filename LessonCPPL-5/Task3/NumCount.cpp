#include "NumCount.h"

void NumCount::operator ()(int var)
{
	if (var % 3 == 0)
	{
		sum_ += var;
		count_++;
	};
};

int NumCount::getSum()
{
	count_++;
	std::cout << "����� �����, ������� 3 =  " << sum_ << std::endl;
	return sum_;
};

int NumCount::getCount()
{
	std::cout << "���������� �����, ������� 3 = " << count_ << std::endl;
	return count_;
};
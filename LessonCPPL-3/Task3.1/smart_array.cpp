#include "smart_array.h"

smart_array::smart_array(const int sizeOfArr)
{
	sizeOfArr_ = sizeOfArr;
	smarr_ = new int[sizeOfArr] {};

	
	for (int i = 0; i < sizeOfArr; i++)
	{
		smarr_[i] = i;
	}
	std::cout << std::endl;
};

smart_array::~smart_array()
{
	delete[] smarr_;
	
};

void smart_array::Print()
{
	for (int i = 0; i < sizeOfArr_; i++)
	std::cout << smarr_[i] << " ";
	std::cout << std::endl;
};

void smart_array::add_element(const int addElement)
{
	if (countPushBack_ >= sizeOfArr_)
	{
		throw std::out_of_range("PushBack - Out_of_range");
	}
	else
	{
		smarr_[countPushBack_] = addElement;
		++countPushBack_;
	}
};

int smart_array::get_element(const int getByIndex)
{
	if ((getByIndex >= sizeOfArr_) || (getByIndex < 0))
	{
		throw std::out_of_range("get_element - Out_of_range");
	}
	else
	{
		return smarr_[getByIndex];
	}
};

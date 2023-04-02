#include "SmartArray.h"

SmartArray::SmartArray(const int sizeOfArray)
{
	sizeOfArray_ = sizeOfArray;

	smArray_ = new int[sizeOfArray] {};

	for (int i = 0; i < sizeOfArray; i++)
	{
		smArray_[i] = i;
	}
	std::cout << std::endl;
};

SmartArray::~SmartArray()
{
	delete[] smArray_;
};

void SmartArray::smartArrayPrint()
{
	for (int i = 0; i < sizeOfArray_; i++)
		std::cout << smArray_[i] << " ";

	std::cout << std::endl;
};

void SmartArray::smartArrayPushBack(const int addingElement)
{
	if (countForPushBack_ >= sizeOfArray_)
	{
		throw std::out_of_range("PushBack - Out_of_range");
	}
	else
	{
		smArray_[countForPushBack_] = addingElement;
		++countForPushBack_;
	}
};

int SmartArray::smartArrayGetElement(const int gettingElementByIndex)
{
	if ((gettingElementByIndex >= sizeOfArray_) || (gettingElementByIndex < 0))
	{
		throw std::out_of_range("GetElement - Out_of_range");
	}
	else
	{
		return smArray_[gettingElementByIndex];
	}
}
SmartArray::SmartArray(const SmartArray& other)
{
	this->sizeOfArray_ = other.sizeOfArray_;

	smArray_ = new int[other.sizeOfArray_];

	for (int i = 0; i < other.sizeOfArray_; i++)
	{
		this->smArray_[i] = other.smArray_[i];
	}
	std::cout << std::endl;
};

SmartArray& SmartArray::operator=(const SmartArray& other)
{
	if (this != &other)
	{
		this->sizeOfArray_ = other.sizeOfArray_;

		delete[] smArray_;

		smArray_ = new int[other.sizeOfArray_];

		for (int i = 0; i < other.sizeOfArray_; i++)
		{
			this->smArray_[i] = other.smArray_[i];
		}
		std::cout << std::endl;

		return *this;
	}
	return *this;
};
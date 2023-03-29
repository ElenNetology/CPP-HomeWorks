#pragma once
#include <iostream>
#include <string>

class smart_array
{
private:
	int* smarr_ = 0;
	int countPushBack_ = 0;
	int sizeOfArr_ = 0;

public:
	smart_array(const int sizeOfArr);
	~smart_array();


	smart_array(const smart_array&) = delete;
	smart_array& operator=(const smart_array&) = delete;

	void Print();
	void add_element (const int add);
	int get_element(const int getByIndex);

};


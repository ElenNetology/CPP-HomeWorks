// Task7.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <unordered_map>
#include <algorithm>
#include <string>
#include <iostream>

void printChar(std::string str, int len)
{
	
	std::unordered_map<char, int> occ;
	for (int i = 0; i < len; i++)
		occ[str[i]]++;

	int size = occ.size();
	std::unordered_map<char, int>::iterator it;

	while (size--) {

		unsigned currentMax = 0;
		char arg_max = 0;
		for (it = occ.begin(); it != occ.end(); ++it) {
			if (it->second > currentMax || (it->second == currentMax && it->first > arg_max)) 
			{
				arg_max = it->first;
				currentMax = it->second;
			}
		}
		std::cout << arg_max << ":  " << currentMax << std::endl;
		occ.erase(arg_max);
	}
}

int main()
{

	std::string str = "Hello world!";
	int len = str.length();

	printChar(str, len);

	return 0;
}


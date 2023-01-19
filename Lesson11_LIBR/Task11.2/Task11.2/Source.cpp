#include <iostream>
#include "Leave.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");

	std::string name;
	std::cout << "¬ведите им€: ";
	std::cin >> name;

	Leave person(name);

	std::cout << person.leave() << std::endl;
	system("pause");
}
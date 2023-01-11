#include <iostream>
#include "Header.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");
	std::cout << std::endl;

	std::string name;

	std::cout << "¬ведите им€: ";
	std::cin >> name;

	Greeter person(name);

	std::cout << person.greet() << std::endl;

}
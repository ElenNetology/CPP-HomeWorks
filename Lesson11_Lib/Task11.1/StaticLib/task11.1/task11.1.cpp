// task11.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "Header.h"

int main()
{
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");
	std::cout << std::endl;

	std::string name;

	std::cout << "Введите имя: ";
	std::cin >> name;

	Greeter person(name);

	std::cout << person.greet() << std::endl;

}
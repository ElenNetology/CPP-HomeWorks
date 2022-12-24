// Task10.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
int main(int argc, char** argv)
{
	setlocale(LC_ALL, "Russian"); //Корректное отображение Кириллицы
	system("chcp 1251");
	std::string name;
	std::cout << "Введите имя: ";
	std::cin >> name;
	std::cout << std::endl;
	std::cout << "Здравствуйте, " << name << " !" << std::endl;
	return 0;
}

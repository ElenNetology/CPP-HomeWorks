// Task2.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

enum Month { JAN = 1, FEB, MAR, APR, MAY, YUN, YUL, AUG, SEP, OCT, NOV, DEC };


int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Russian");

	int x;
	do {
		std::cout << std::endl << " Введите номер месяца: ";
		std::cin >> x;

		switch (static_cast <Month>(x))
		{
		case Month::JAN:
			std::cout << std::endl << " Январь";
			break;
		case Month::FEB:
			std::cout << std::endl << " Февраль";
			break;
		case Month::MAR:
			std::cout << std::endl << " Март";
			break;
		case Month::APR:
			std::cout << std::endl << " Апрель";
			break;
		case Month::MAY:
			std::cout << std::endl << " Май";
			break;
		case Month::YUN:
			std::cout << std::endl << " Июнь";
			break;
		case Month::YUL:
			std::cout << std::endl << " Июль";
			break;
		case Month::AUG:
			std::cout << std::endl << " Август";
			break;
		case Month::SEP:
			std::cout << std::endl << " Сентябрь";
			break;
		case Month::OCT:
			std::cout << std::endl << " Октябрь";
			break;
		case Month::NOV:
			std::cout << std::endl << " Ноябрь";
			break;
		case Month::DEC:
			std::cout << std::endl << " Декабрь";
			break;
		}
		if (x < 0 || x > 12){
			std::cout << std::endl << "  Неправильный номер! ";
		}
		else {
			if (x == 0) {
				std::cout << std::endl << "До свидания!";
			}
		}
	} while (x);
	return 0;
}
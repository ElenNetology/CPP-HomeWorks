// Races.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
//#include "Transport.h"
//#include "AirTrans.h"
//#include "Exception.h"

enum class AIRTRANSPORT {
	BROOM,
	MAGICAIR,
	EAGLE,
	MAXNUM
};

enum class GROUNDTRANS {
	CAMELRUN,
	CENTAUR,
	CAMEL,
	ALLTERRBOOTS,
	MAXNUM
};

enum class ALLTRANSPORT {
	CAMELRUN,
	CENTAUR,
	CAMEL,
	ALLTERRBOOTS,
	BROOM,
	MAGICAIR,
	EAGLE,
	MAXNUM
};



int main()
{
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");
	const int N = 7;
	std::string transport_all[N] = { "Верблюд", "Верблюд-быстроход", "Кентавр", "Ботинки-вездеходы", "Ковер-самолет", "Орел", "Метла"};

	enum RaceTipe {
		Ground = 1, 
		Air, 
		grandARace
	};
	int RaceTipe = 0;
	int Dist = 0; 
	int n = 0;
	std::cout << "Добро пожаловать в гоночный симулятор!\n 1.Гонка для наземного танспорта.\n 2. Гонка для воздушного транспорта.\n 3. Гонка для наземного и воздушного транспорта.\n Выберите тип гонок: ";
	while (true) {
		std::cout << "Выберите тип гонки:  ";
		std::cin >> n;
		if (std::cin.fail() || n > 3 || n < 0) {
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "Ошибка, повторите попытку" << '\n';
		}
		else {
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			break;
		}
		if (n == 0) {
			std::cout << "До свидания!\n";
			exit(0);
		}
		int dist = 0;
		
		while (true) {
			std::cout << "Укажите длину дистанции (должна быть положительной:  ";
			std::cin >> dist;
			if (std::cin.fail() || dist <= 0) {
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "Ошибка, повторите попытку" << '\n';
			}
			else {
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				break;
			}
		}




}


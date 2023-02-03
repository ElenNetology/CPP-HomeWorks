// Races.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
//#include "Transport.h"
//#include "AirTrans.h"
//#include "Exception.h"





int main()
{
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");
	enum RaceTipe {
		Ground = 1, 
		Air, 
		grandARace
	};
	int RaceTipe;
	int Dist; 
	int n;
	std::cout << "Добро пожаловать в гоночный симулятор!\n 1.Гонка для наземного танспорта.\n 2. Гонка для воздушного транспорта.\n 3. Гонка для наземного и воздушного транспорта.\n Выберите тип гонок: ";
	
	std::cin >> RaceTipe;
	if ((RaceTipe > 0) || (RaceTipe == 1) || (RaceTipe == 2) || (RaceTipe == 3))
	{
		std::cout << "Укажите длину дистанции (должна быть положительной:  ";
		std::cin >> Dist;
		
		if (Dist>0)
		std::cout << "\nДолжно быть зарегистрировано хотя бы 2 транспортных средства.\n 1. Зарегистрировать транспорт \n Выберите действие: ";
		std::cin >> n;

	}







}


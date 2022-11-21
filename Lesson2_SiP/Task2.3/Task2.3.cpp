// Task2.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstring>
#include <Windows.h>

//void printAdress(struct Adress adress);

struct Adress {
	std::string town;
	std::string  street;
	int num_house{};
	int num_flat{};
	int index{};
};
void printAdress(struct Adress adress1) {
	std::cout << "Город: " << adress1.town << std::endl;
	std::cout << "Улица: " << adress1.street << std::endl;
	std::cout << "Номер дома: " << adress1.num_house << std::endl;
	std::cout << "Номер квартиры: " << adress1.num_flat << std::endl;
	std::cout << "Индекс: " << adress1.index << std::endl;
}
int main(int argc, char** argv)
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	setlocale(LC_ALL, "Russian");
	Adress adress1;
	adress1.town = "Самара";
	adress1.street = "Новосадовая";
	adress1.num_house = 25;
	adress1.num_flat = 126;
	adress1.index = 450987;

	Adress adress2;
	adress2.town = "Санкт-Петербург";
	adress2.street = "Лиговский пр-кт";
	adress2.num_house = 78;
	adress2.num_flat = 325;
	adress2.index = 123654;
	// Print 1 info
	printAdress(adress1);
	std::cout << std::endl;
	// Print 2 info
	printAdress(adress2);

	return 0;
}

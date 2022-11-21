// Task2.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <Windows.h> 

struct Bank //объявляем шаблон структуры
{
    std::string name; //имя
    int sch{};
    double balans{};
};

void change_balans(Bank* client)
{
    std::cout << "Введите новый баланс : ";
    std::cin >> client->balans;
}
int main(int argc, char** argv)
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    Bank client; //объявляем переменную структурного типа
    std::cout << "Введите номер счета: ";
    std::cin >> client.sch;
    std::cout << std::endl;
    std::cout << "Введите имя владельца: ";
    std::cin >> client.name;
    std::cout << std::endl;
    std::cout << "Баланс: ";
    std::cin >> client.balans;
    std::cout << std::endl;
    change_balans(&client);
    std::cout << "Ваш счет: " << client.name << ", " << client.sch << ", " << client.balans;
    std::cout << std::endl;
    return 0;
}

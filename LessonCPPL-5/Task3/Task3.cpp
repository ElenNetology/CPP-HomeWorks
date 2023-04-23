// Task3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "NumCount.h"
#include <vector>

int main()
{
    setlocale(LC_ALL, "ru");

    NumCount NumC;
    std::vector<int> v = { 4, 1, 3, 6, 25, 54 };

    for (auto var : v)
    {
        std::cout << var << "\t";
    };
    std::cout << "\n\n";

    for (auto var : v)
    {
        NumC(var);
    };
    NumC.getCount();
    NumC.getSum();
}
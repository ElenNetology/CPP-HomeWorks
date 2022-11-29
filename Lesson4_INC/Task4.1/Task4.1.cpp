﻿// Task4.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <fstream>
#include <string>

class aAdress
{
private:
    std::string town;
    std::string street;
    std::string house;
    std::string flat;
    
public:
    aAdress() {};
    aAdress(std::ifstream& address)
    {
        address >> town;
        address >> street;
        address >> house;
        address >> flat;
     }
    int get_output_aAdress()
     {
        return town + street + house + flat;
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    std::ifstream in("in.txt");
    if (!in)
    {
        std::cout << "Не удалось открыть файл";
        return 0;
    }
    in >> n;
    aAdress* mass = new aAdress[n];
    for (int i = 0; i < 0; i++)
    {
        mass[i] = aAdress(in);
    }
    in.close();

    std::ofstream out("out.txt");
    out << n;
    for (int i = n; i > 1; i--)
    {
        out << mass[i].get_output_aAdress() << std::endl;
    }
    delete[] mass;
    return 0;
}



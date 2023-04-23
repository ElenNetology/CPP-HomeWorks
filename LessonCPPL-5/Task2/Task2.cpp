// Task2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "CArray.h"

int main()
{
    setlocale(LC_ALL, "ru");
    CArray <double> A1(7, 7);

    A1.printArr();
    A1.getSize();
    try
    {
        A1(0, 0) = 1.3;
        A1(1, 1) = 5.4;
        A1(2, 2) = 4.5;
        A1(5, 4) = 3.6;
        A1[5][5] = 99;
        A1[5][6] = 88;

        A1.printArr();

        std::cout << A1(1, 1) << std::endl;
        std::cout << A1[5][5] <<std::endl;
        CArray <double> a1(2, 3);
        CArray <double> a2(2, 3);
       
        a2(0, 0) = 115.01;
        a2(1, 2) = 125.02;
        a2(1, 1) = 135.03;

        std::cout << "Матрица a1" << std::endl;
        a1.printArr();

        std::cout << "Матрица a2" << std::endl;
        a2.printArr();

        a1 = a2;

        std::cout << "Матрица a1" << std::endl;
        a1.printArr();

        std::cout << "Матрица a2" << std::endl;
        a2.printArr();

    }
    catch (const std::exception& ex)
    {
        std::cout << ex.what() << std::endl;
    };
  };
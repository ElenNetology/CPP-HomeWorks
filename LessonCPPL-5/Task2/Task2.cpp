// Task2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "CArray.h"

int main()
{
    setlocale(LC_ALL, "ru");
    CArray <double> T1(7, 7);

    T1.printArr();
    T1.getSize();
    try
    {
        T1(0, 0) = 1.3;
        T1(1, 1) = 5.4;
        T1(2, 2) = 4.5;
        T1(5, 4) = 3.6;
        T1[5][5] = 99;
        T1[5][6] = 88;

        CArray <double> t1(2, 3);
        CArray <double> t2(2, 3);

        T1.printArr();

        std::cout << T1(1, 1) << "\n";
        std::cout << T1[5][5] << "\n";

        t2(0, 0) = 125.01;

        std::cout << "\nt1\n";
        t1.printArr();

        std::cout << "\nt2\n";
        t2.printArr();

        t1 = t2;

        std::cout << "\nt1\n";
        t1.printArr();

        std::cout << "\nt2\n";
        t2.printArr();

    }
    catch (const std::exception& ex)
    {
        std::cout << ex.what() << std::endl;
    };
  };
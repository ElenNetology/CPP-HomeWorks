// Task6.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream> 
#include <string>
#include <Windows.h>
#include "Function.h"

int main(int argc, char** argv)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");
    
    double num1 = 0;
    double num2 = 0;
    int Nooperation = 0;
    double a = 0;
    std::cout << "Введите num1: ";
    std::cin >> num1;
    std::cout << std::endl;
    std::cout << "Введите num2: ";
    std::cin >> num2;
    std::cout << std::endl;
   do {
        std::cout << "Выберите операцию (1 - сложение, 2 - вычитание, 3 - умножение, 4 - деление, 5 - возведение в степень, 0 - выход из программы):";
        std::cin >> Nooperation;
        switch (Nooperation)
        {
        case 1:
            a = add(num1, num2);
            std::cout << num1 << " плюс " << num2 << "= " << a << std::endl;
            break;
        case 2:
            a = subtract(num1, num2);
            std::cout << num1 << " минус " << num2 << "= " << a << std::endl;
            break;
        case 3:
            a = multiply (num1, num2);
            std::cout << num1 << " умножить на " << num2 << "= " << a << std::endl;
            break;
        case 4:
            a = divide(num1, num2);
            std::cout << num1 << " разделить на " << num2 << "= " << a << std::endl;
            break;
        case 5:
            a = exp(num1, num2);
            std::cout << num1 << " в степени " << num2 << "= " << a << std::endl;
            break;
        case 0:
           return 0;
        default:
            break;
        }
    } while (true);
    return 0;
}
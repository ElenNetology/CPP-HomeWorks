// Task6.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include "ClassCounter.h"

int main()
{
    setlocale(LC_CTYPE, "Russian");
    char otv;
    int n = 0;
    bool nach = false;
    do
    {
        std::cout << std::endl << "Вы хотите указать начальное значение счётчика? Введите y или n: ";
        std::cin >> otv;
        std::cout << std::endl;

        if (otv == 'y' || otv == 'Y')
        {
            std::cout << "Введите начальное значение счётчика: ";
            std::cin >> n;
            nach = true;
        }
        else  (otv == 'n' || otv == 'N');
        {
            nach = true;
        }
    } while (!nach);
    ClassCounter counter(n);
    while (true)
    {
        char opt;
        std::cout << "Введите +, -, = или x для выхода: ";
        std::cin >> opt;
        switch (opt)
        {
        case '+':
            counter.add();
            break;
        case '-':
            counter.subtract();
            break;
        case '=':
            std::cout << "Показание счетчика " << counter.get() << "\n";
            break;
        case 'x':
            std::cout << "До свидания!\n";
            return 0;
        default:
            break;
        }
    }
    return 0;
}
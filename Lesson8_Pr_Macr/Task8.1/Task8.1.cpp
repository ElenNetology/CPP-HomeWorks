// Task8.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
//#include"Add.h"



#define MODE 
#if !defined MODE
#error "сообщение о необходимости определить MODE"
#endif // !

int main()
{
    setlocale(LC_ALL, "Russian"); //Корректное отображение Кириллицы
    system("chcp 1251");

    #ifdef MODE 0
    std::cout << std::endl << "Работаю в режиме тренировки" << std::endl;
    #endif

    #ifdef MODE 1
    std::cout << std::endl << "Работаю в боевом режиме" << std::endl;
    
    double num1 = 0;
    double num2 = 0;
    std::cout << "Введите число 1: "; std::cin >> num1;
    std::cout << std::endl;
    std::cout << "Введите число 2: "; std::cin >> num2;
    std::cout << std::endl;
    double add = num1+num2;
    std::cout << std::endl << "Результат сложения: " << add << std::endl;
     
    #endif

#if defined MODE!= 0 || defined MODE!= 1
    std::cout << std::endl << "Неизвестный режим. Завершение работы" << std::endl;

#endif

}
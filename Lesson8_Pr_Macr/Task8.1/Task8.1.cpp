// Task8.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

#define MODE 2
#if !defined MODE
#error "сообщение о необходимости определить MODE"
#endif // !

#define MODE 1 
double Add(double num1, double num2)
{
    return num1 + num2;
}

int main()
{
    setlocale(LC_ALL, "Russian"); 
    system("chcp 1251");

 #if MODE == 0
    std::cout << std::endl << "Работаю в режиме тренировки" << std::endl;
   
  #elif MODE == 1
    std::cout << std::endl << "Работаю в боевом режиме" << std::endl;
    double num1 = 0;
    double num2 = 0;
    std::cout << "Введите число 1: "; std::cin >> num1;
    std::cout << std::endl;
    std::cout << "Введите число 2: "; std::cin >> num2;
    std::cout << std::endl;
    std::cout << std::endl << "Результат сложения: " << Add(num1, num2) << std::endl;
    
  #else MODE > 1 || MODE < 0
        std::cout << std::endl << "Неизвестный режим. Завершение работы" << std::endl;
  #endif
 


}
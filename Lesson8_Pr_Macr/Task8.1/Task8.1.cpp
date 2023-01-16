#include <iostream>

 double Add(double num1 =0, double num2 = 0)
    {
        return num1 + num2;
    }

#define MODE 2
#if !defined MODE
#error "сообщение о необходимости определить MODE"
#endif // !

int main()
{
    setlocale(LC_ALL, "Russian"); 
    system("chcp 1251");

 #if MODE == 1
    std::cout << std::endl << "Работаю в боевом режиме" << std::endl;
    double num1 = 0;
    double num2 = 0;
    std::cout << "Введите число 1: "; std::cin >> num1;
    std::cout << std::endl;
    std::cout << "Введите число 2: "; std::cin >> num2;
    std::cout << std::endl;
    std::cout << std::endl << "Результат сложения: " << Add(num1, num2) << std::endl;

 #elif MODE == 0
    std::cout << std::endl << "Работаю в режиме тренировки" << std::endl;
 #else 
    std::cout << std::endl << "Неизвестный режим. Завершение работы" << std::endl;
 #endif
 


}
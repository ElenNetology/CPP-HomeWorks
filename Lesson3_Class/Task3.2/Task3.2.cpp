// Task3.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Counter
{
private:
    int count ;
   
 public:
     
     Counter();
     Counter (int n) 
     { 
         count = n;
     }
    int add()
    {
       return ++count;
    }
    int subtract()
    {
       return --count;
    }
    int get()
    {
        return count;
    }
};


int main()
{
    setlocale(LC_CTYPE, "Russian");
    char otv; 
    int n =1; 
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
    Counter schet (n);
    while (true)
    {
        char opt;
        std::cout << "Введите +, -, = или x для выхода: ";
        std::cin >> opt;
        switch (opt)
        {
        case '+':
            schet.add();
            break;
        case '-':
            schet.subtract();
            break;
        case '=':
            std::cout << "Показание счетчика " << schet.get() << "\n";
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
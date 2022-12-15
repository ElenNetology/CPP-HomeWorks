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
    int n = 0;
    char otv;
    auto schet = Counter(n);
    std::cout << "Вы хотите указать начальное значение счётчика? Введите y или n: ";
    std::cin >> otv;
    if (otv == 'n'){
    int n = 1;
    }
    else {
      std::cout << "Введите начальные показания счетчика: ";
      std::cin >> n;
    }
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
// Task3.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Counter
{
 public:
     
    void add()
    {
        counter++;
    }
    void subtract()
    {
        counter--;
    }
    int get()
    {
        return counter;
    }
private:
    int counter;
};


int main()
{
    setlocale(LC_CTYPE, "Russian");
    int n = 1;
    char otv;
    
    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::cin >> otv;
    if (otv == 'n'){
    int n = 1;
    }
    else {
      std::cout << "Введите начальные показания счетчика: ";
    std::cin >> n;
    }
    Counter counter;
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
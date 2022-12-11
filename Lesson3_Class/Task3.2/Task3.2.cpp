// Task3.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class Counter
{
 public:
    
   void setnach (int n)
    {
      n = 1;
    }; 
    void add()
    {
        count++;
    }
    void subtract()
    {
        count--;
    }
    int get()
    {
        return count;
    }
private:
    int count;
};


int main()
{
    setlocale(LC_CTYPE, "Russian");
    int n = 0;
    char otv;
    Counter counter;
    std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: ";
    std::cin >> otv;
    if (otv == 'n'){
    counter.setnach (n);
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
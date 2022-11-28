// Task3.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>

class cCounter
{
    char otv;
public:
    cCounter(int _v) : counter(_v)
    {
        if ((_v < 0) || (_v > 999))
            std::cout << "Неправильное число\n";
    }
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
    int n;
    //char otv;
    //std::cout << "Вы хотите указать начальное значение счётчика? Введите да или нет: "; std::cin >> otv;
    std::cout << "Введите начальные показания счетчика: ";
    std::cin >> n;

    cCounter counter(n);

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
            return 0;

        default:
            std::cout << "До свидания!\n";
        }
    }

    return 0;
}
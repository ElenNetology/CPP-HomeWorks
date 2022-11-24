// Task3.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream> 
#include <Windows.h>

class calculytor
{
    double num1, num2;
public:
    double add(double num1, double num2)
    {
     double add = num1 + num2;
     std::cout <<"num1 + num2" << "=" << add << std::endl;
     return num1 + num2;
    }
    double multiply(double num1, double num2)
    {
        double multiply = num1 * num2;
     std::cout << "num1 * num2" << "=" << multiply <<std::endl;
     return num1 * num2;
    }
    double subtract_1_2(double num1, double num2)
    {
        double subtract_1_2 = num1 - num2;
     std::cout << "num1 - num2" << "=" << subtract_1_2 <<std::endl;
     return num1 - num2;
    }
    double subtract_2_1(double num1, double num2)
    {
        double subtract_2_1 = num2 - num1;
     std::cout <<"num2 - num1" << "=" << subtract_2_1 <<std::endl;
     return num2 - num1 ;
    }
    double divide_1_2(double num1, double num2)
    {
        double divide_1_2 = num1 / num2;
     std::cout << "num1 / num2" << "=" << divide_1_2 <<std::endl;
     return num1 / num2;
    }
    double divide_2_1(double num1, double num2)
    {
        double divide_2_1 = num1 / num2;
     std::cout << "num2 / num1" << "=" << divide_2_1 << std::endl;
     return num2 / num1;
    }
    bool set_num1(double num1)
    {
        if (num1 != 0) {
         this-> num1 = num1;
         return true;
        }else {
            std::cout << "Неверный ввод!" << std::endl;
        }
     }
    bool set_num2(double num2)
    {
        if (num2 != 0) {
            this->num2 = num2;
            return true;
        } else {
            std::cout << "Неверный ввод!" << std::endl;
        }
    }
};

int main(int argc, char** argv)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");
    double num1;
    double num2;
    std::cout << "Введите num1: ";
    std::cin >> num1;
    std::cout<<std::endl;
    std::cout << "Введите num2: ";
    std::cin >> num2;
    std::cout << std::endl;
    calculytor calc;
        calc.add(num1,num2);
        calc.multiply(num1, num2);
        calc.subtract_1_2(num1, num2);
        calc.subtract_2_1(num1, num2);
        calc.divide_1_2(num1, num2);
        calc.divide_2_1(num1, num2);
        calc.set_num1(num1);
        calc.set_num2(num2);

    
    return 0;
}

// Task3.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream> 
#include <Windows.h>

class calculytor
{
    int num1, num2;
    void setnum1(int num_1)
    {
        num1 = num_1;
    }
    void setnum2(int num_2)
    {
        num2 = num_2;
    }
    bool set_num1(int num1)
    {
        if ( num1 != 0) {
            this->num1 = num1;
            return true;
        }
        else {
            std::cout << "Неверный ввод!" << std::endl;
            return false;
        }
    }
    bool set_num2(int num2)
    {
        if (num2 != 0) {
         this->num2 = num2;
         return true;
        } else {
          std::cout << "Неверный ввод!" << std::endl; 
          return false;
         }
     }
    public:
    calculytor() : num1(0), num2(0)
        {}
        double add()
        {
            double adds = num1 + num2;
            return adds;
        }
        double multiply()
        {
            double multp = num1 * num2;
            return multp;
        }
        double subtract_1_2()
        {
            double subtr_1_2 = num1 - num2;
            return subtr_1_2;
        }
        double subtract_2_1()
        {
            double subtr_2_1 = num2 - num1;
            return subtr_2_1;
        }
        double divide_1_2()
        {
            double div_1_2 = num1 / num2;
            return div_1_2;
        }
        double divide_2_1()
        {
            double div_2_1 = num2 / num1;
            return div_2_1;
        }
 };
    
  

int main(int argc, char** argv)
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    setlocale(LC_ALL, "Russian");
    calculytor calc;
    int num_1, num_2;
    std::cout << "Введите num1: ";
    std::cin >> num_1;
    std::cout<<std::endl;
    std::cout << "Введите num2: ";
    std::cin >> num_2;
    std::cout << std::endl;
    
    std::cout << "num1 + num2" << "=" << calc.add() << std::endl;
    std::cout << "num1 * num2" << "=" << calc.multiply()<< std::endl;
    std::cout << "num1 - num2" << "=" << calc.subtract_1_2() << std::endl;
    std::cout << "num2 - num1" << "=" << calc.subtract_2_1() << std::endl;
    std::cout << "num1 / num2" << "=" << calc.divide_1_2() << std::endl;
    std::cout << "num2 / num1" << "=" << calc.divide_2_1() << std::endl;

    return 0;
}

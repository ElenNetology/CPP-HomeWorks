// TaskCPPL5.1.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <algorithm> 
#include <iostream> 
#include <vector>

    int main()
    {
        setlocale(LC_ALL, "Russian");
        std::vector < int > v{ 4, 7, 9, 14, 12 };

        auto print = [](const  int& n) {  std::cout << n << ' ';  };

        std::cout << "Входные данные: \t ";
        std::for_each(v.cbegin(), v.cend(), print); std::cout << ' \n ';

        std::for_each(v.begin(), v.end(), [](int& n) { n*3; });

        std::cout << "\nВыходные данные:\t ";
        std::for_each(v.cbegin(), v.cend(), print); std::cout << ' \n ';

}


// TaskCPPL5.1.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <algorithm> 
#include <iostream> 
#include <vector>

    int main()
    {
        setlocale(LC_ALL, "Russian");
        std::vector < int > v{ 4, 7, 9, 14, 12 };
         
        std::cout << "Входные данные: \t ";
        std::for_each(v.cbegin(), v.cend(), [](const int& n) {  std::cout << n << ' ';  });
        std::cout << std::endl;
        std::for_each(v.begin(), v.end(), [&v](int& i)
         {
        if (i % 2 != 0)
        {
            (i) *= 3;
        }
         });

        std::cout << "Выходные данные: \t ";
        std::for_each(v.cbegin(), v.cend(), [](const int& n) {  std::cout << n << ' ';  });
        std::cout << std::endl;
}


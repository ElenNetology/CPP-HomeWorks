// Task7.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <algorithm>
#include <iostream>
#include <vector>

int main()
{
    // вектор, содержащий несколько повторяющихся элементов
    std::vector<int> v{ 6, 1, 5, 1, 3, 4, 4 };
    auto print = [&](int id) {
        std::cout << id << ": ";
        for (int i : v)
            std::cout << i << ' ';
        std::cout << '\n';
    };
    print(1);

    std::sort(v.rbegin(), v.rend()); 
   
    auto last = std::unique(v.begin(), v.end());
    v.erase(last, v.end());
    v.erase (v.begin());
    print(2);
}
// Task8.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <algorithm>
#include <vector>

int main()
{
    std::vector<int> v{ 1, 1, 2, 5, 6, 1, 2, 4 };
    std::sort(v.begin(), v.end());
    auto last = std::unique(v.begin(), v.end());
    v.erase(last, v.end());
    for (const auto& i : v)
        std::cout << i << " ";
    std::cout << "\n";
}
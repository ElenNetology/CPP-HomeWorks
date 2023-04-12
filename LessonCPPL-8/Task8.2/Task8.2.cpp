// Task8.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <vector>

template <typename T>
void print_container(const T& container)
{
    for (const auto& item : container)
    {
        if constexpr (std::is_pointer_v< std::decay_t<decltype(item)> >)
        {
            std::cout << *item << " ";
        }
        else
        {
            std::cout << item << " ";
        }
    }
    std::cout << '\n';
}
int main()
{
    std::vector<std::string> vecstr = { "one", "two", "three", "four" };
        
    print_container(vecstr);
   
    return 0;
}
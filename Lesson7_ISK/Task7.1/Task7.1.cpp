// Task7.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <exception>


int function(std::string anyWord, int forbiddenLength)
{
    if (forbiddenLength == anyWord.length())
    {
        throw std::exception("Вы ввели слово запретной длины! До свидания");
    };
    return static_cast<int>(anyWord.length());
}

int main()
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");

    int forbiddenLength = 0;
    std::string anyWord;
    std::cout << "Введите запретную длину: ";
    std::cin >> forbiddenLength;
    
    try
    {
        do
        {
            std::cout << "Введите слово: ";
            std::cin >> anyWord;

            function(anyWord, forbiddenLength);

            std::cout << "Длина слова \"" << anyWord << "\" равна " << anyWord.size();
            std::cout << std::endl;

        } while (forbiddenLength != anyWord.size());
    }
    catch (const std::exception& ex)
    {
        std::cout << std::endl << ex.what() << std::endl;
    }
}
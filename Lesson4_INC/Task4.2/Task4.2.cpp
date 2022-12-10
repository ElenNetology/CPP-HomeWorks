// Task4.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cstring>
#include <fstream>
#include <string>

class Adress
{
    std::string town_;
    std::string street_;
    int house_ = 0;
    int flat_ = 0;
    std::string FullAd_;

public:
    Adress(std::string town, std::string street, int house, int flat)
    {
        town_ = town;
        street_ = street;
        house_ = house;
        flat_ = flat;
    }
    std::string get_out_Adress()
    {
        FullAd_ = town_ + ", " + street_ + ", " + std::to_string(house_) + ", " + std::to_string(flat_);
        return FullAd_;
    };
};
int printadress(std::string* massAdress, const int n)
{
    std::ofstream fileOut("out.txt", std::ios_base::trunc);
    if (fileOut.is_open())
    {
        std::cout << "Файл out.txt успешно открыт." << std::endl;
    }
    else {
        std::cout << "Ошибка открытия файла" << std::endl;
    }
    fileOut << n << std::endl << std::endl;
    for (int i = n - 1; i >= 0; i--)
    {
        fileOut << n - i << ". " << massAdress[i] << std::endl;
    }
    fileOut.close();
    return static_cast<int> (n);
};

void Sort(std::string* massAdress, const int n)
{
    bool temp = false;
    do {
        temp = false;
        std::string tmp;

        for (int i = n - 1; i > 0; --i)
        {
            if (massAdress[i - 1] > massAdress[i])
            {
                tmp = massAdress[i];
                massAdress[i] = massAdress[i - 1];
                massAdress[i - 1] = tmp;
                temp = true;
            }
        }
    } while (temp);
}
std::string* adress(const int n)
{
    std::string* adress = new std::string[n]{};
    return adress;
}
void adress(std::string* adress, const int n)
{
    delete[] adress;
    adress = nullptr;
}
int main()
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
    std::ifstream fileIn("in.txt");
    if (!fileIn)
    {
        std::cout << "Ошибка открытия файла in.txt." << std::endl;
    }
    else {
        std::cout << "Файл in.txt успешно открыт." << std::endl;
    }
    int n = 0;
    std::string town = {};
    std::string street = {};
    int house = 0;
    int flat = 0;
    fileIn >> n;
    std::string* massAdress = adress(n);
    for (int i = 0; i < n; i++)
    {
        fileIn >> town >> street >> house >> flat;
        Adress adress(town, street, house, flat);
        massAdress[i] = adress.get_out_Adress();
    };
    fileIn.close();

    Sort(massAdress, n);
    printadress(massAdress, n);
    adress(massAdress, n);
}


// Task5.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>

class Figure
{
protected:
    int sides_count;
    std::string Name;

public:
    Figure() { }
    Figure(int sides_count)
    {
        std::cout << "Фигура" << ": " << sides_count << std::endl;
    }
    int get_sides_count()
    {
        return sides_count;
    }
    void get_Name()
    {
        std::string Name = "Фигура";
    }
};

class Triangle : public Figure
{
public:
    Triangle(int sides_count = 3) : Figure(sides_count)
    {
        std::cout << "Треугольник" << ": " << sides_count << std::endl;
    }
    int get_sides_count()
    {
        return sides_count;
    }
    void get_Name()
    {
        std::string Name = "Треугольник";
    }
};
class Quadrangle : public Figure
{
public:
    Quadrangle(int sides_count = 4) : Figure(sides_count)
    {
        std::cout << "Прямоугольник" << ": " << sides_count << std::endl;
    }
    int get_sides_count()
    {
        return sides_count;
    }
    void get_Name()
    {
        std::string Name = "Прямоугольник";
    }
};

int main()
{
    setlocale(LC_ALL, "Russian");
    int sides_count;
    std::cout << "Количество сторон: ";
    std::cout << std::endl;
    Figure figure(0);
    Triangle triangle(3);
    Quadrangle qudrangle(4);

    return 0;
}
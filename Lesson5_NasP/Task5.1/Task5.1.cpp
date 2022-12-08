﻿// Task5.1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <string>
#include <stdexcept> 


class Figure
{
public:
    Figure(const std::string& name) : get_Name(name) {}
    virtual ~Figure() {}

    virtual void calculateArea() = 0;
    virtual void calculateVolume() = 0;

    int get_sides_count() const
    {
     return sides_count;
    }
    std::string getName() const
    {
     return get_Name;
    }
 protected:
    std::string get_Name;
    int sides_count;
    
};

class Triangle final : public Figure
{
public:
    Triangle(int sides_count) : Figure("Triangle")
    {
     sides_count = 3;
    }
 private:
    int sides_count;
 };

class Quadrangle final : public Figure
{
public:
    Quadrangle (int sides_count) : Figure("Quadrangle")
    {
     sides_count = 4;
    }
 private:
     int sides_count;
};

class ShapeCreator
{
public:
    template<typename T, typename... Args, typename std::enable_if<std::is_base_of<Shape, T> ::value, T> ::type* = nullptr>
    T* createShape(Args... arg)
    {
     return new T(std::forward<Args>(arg)...);
    }
};

int main()
{
    int sides_count;
    std::cout << "Количество сторон: ";
    std::cin >> sides_count;
    ShapeCreator shapeCreator;
    Shape* shape = nullptr;
    switch (choice)
    {
    case 1:
    {
        try
        {
            float height, radius;
            std::cout << "Enter height: ";
            std::cin >> height;
            std::cout << "Enter radius: ";
            std::cin >> radius;
            shape = shapeCreator.createShape<Cylinder>(height, radius);
        }
        catch (std::invalid_argument& e)
        {
            std::cout << e.what();
            return -1;
        }
    }
    break;
    case 2:
    {
        try
        {
            float radius;
            std::cout << "Enter radius: ";
            std::cin >> radius;
            shape = shapeCreator.createShape<Sphere>(radius);
        }
        catch (std::invalid_argument& e)
        {
            std::cout << e.what();
            return -1;
        }
    }
    break;
    }
    shape->calculateArea();
    shape->calculateVolume();

    std::cout << std::endl;
    std::cout << shape->getName() << " area: " << shape->getArea();
    std::cout << std::endl;
    std::cout << shape->getName() << " volume: " << shape->getVolume();

    return 0;
}
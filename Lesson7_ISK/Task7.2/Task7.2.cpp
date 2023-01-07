// Task6.3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <string>
#include <stdexcept>
#include"Figure.h"
#include"Triangle.h"
#include"Box.h"
#include"equilateralTr.h"
#include"isoscelesTr.h"
#include"Parallelogram.h"
#include"Print.h"
#include"Quadrangle.h"
#include"Rectan.h"
#include"rightTr.h"
#include"Romb.h"
#include"Exception.h"


int main()
{
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");
	try
	{
		Triangle Tri1(25, 42, 38, 70, 50, 60);
		printinfo(&Tri1);
		std::cout << "cоздан" << std::endl;
	}
	catch (const std::exception& Tr)
	{
		std::cerr << "Ошибка создания фигуры. " << std::endl << "Причина: ";
		std::cerr << Tr.what() << std::endl;
	}
	try
	{
		rightTr rightTr1(10, 10, 10, 60, 60, 60);
		printinfo(&rightTr1);
		std::cout << "cоздан" << std::endl;
	}
	catch (const std::exception& rT)
	{
		std::cerr << std::endl;
		std::cerr << "Ошибка создания фигуры. " << std::endl << "Причина: ";
		std::cerr << rT.what() << std::endl;
	}

	try
	{
		isoscelesTr isoscelesTr1(11, 45, 110, 75, 40, 55);
		printinfo(&isoscelesTr1);
		std::cout << "cоздан" << std::endl;
	}
	catch (const std::exception& iT)
	{
		std::cerr << std::endl;
		std::cerr << "Ошибка создания фигуры. " << std::endl << "Причина: ";
		std::cerr << iT.what() << std::endl;
	}

	try
	{
		equilateralTr equilateralTr1(10, 10, 10, 60, 60, 60);
		printinfo(&equilateralTr1);
		std::cout << "cоздан" << std::endl;
	}
	catch (const std::exception& eT)
	{
		std::cerr << std::endl;
		std::cerr << "Ошибка создания фигуры. " << std::endl << "Причина: ";
		std::cerr << eT.what() << std::endl;
	}

	try
	{
		Quadrangle Quadrangle1(5, 8, 10, 41, 15, 35, 98, 110);
		printinfo(&Quadrangle1);
		std::cout << "cоздан" << std::endl;
	}
	catch (const std::exception& q)
	{
		std::cerr << std::endl;
		std::cerr << "Ошибка создания фигуры. " << std::endl << "Причина: ";
		std::cerr << q.what() << std::endl;
	}
	try
	{
		Rectan Rectan1(14, 24, 14, 24, 90, 90, 90, 90);
		printinfo(&Rectan1);
		std::cout << "cоздан" << std::endl;
	}
	catch (const std::exception& r)
	{
		std::cerr << std::endl;
		std::cerr << "Ошибка создания фигуры. " << std::endl << "Причина: ";
		std::cerr << r.what() << std::endl;
	}

	try
	{
		Box Box1(50, 45, 55, 40, 60, 70, 50, 90);
		printinfo(&Box1);
		std::cout << "cоздан" << std::endl;
	}
	catch (const std::exception& s)
	{
		std::cerr << std::endl;
		std::cerr << "Ошибка создания фигуры. " << std::endl << "Причина: ";
		std::cerr << s.what() << std::endl;
	}

	try
	{
		Parallelogram Parallelogram1(40, 50, 40, 50, 40, 140, 40, 140);
		printinfo(&Parallelogram1);
		std::cout << "создан" << std::endl;
	}
	catch (const std::exception& s)
	{
		std::cerr << std::endl;
		std::cerr << "Ошибка создания фигуры. " << std::endl << "Причина: ";
		std::cerr << s.what() << std::endl;
	}
	try
	{
		Romb Romb1(14, 24, 34, 14, 60, 30, 60, 30);
		printinfo(&Romb1);
		std::cout << "создан" << std::endl;
	}
	catch (const std::exception& s)
	{
		std::cerr << std::endl;
		std::cerr << "Ошибка создания фигуры. " << std::endl << "Причина: ";
		std::cerr << s.what() << std::endl;
	}
}
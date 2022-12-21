// Task7.2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include"Figure.h"
#include"Triangle.h"
#include"Box.h"
#include"equilateralTr.h"
#include"isoscelesTr.h"
#include"Parallelogram.h"
#include"Print.h"
#include"Quadrangle.h"
#include"Rect.h"
#include"rightTr.h"
#include"Romb.h"





int main()
{
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");
	Triangle Tri1(15, 22, 38, 40, 50, 60);
	rightTr rightTr1(10, 20, 30, 40, 50);
	isoscelesTr isoscelesTr1(11, 110, 75, 40, 55);
	equilateralTr equilateralTr1(111);
	Quadrangle Quadrangle1(5, 8, 10, 41, 15, 35, 98, 110);
	Rect Rect1(14, 24);
	Box Box1(50);
	Parallelogram Parallelogram1(40, 50, 25, 74);
	Romb Romb1(14, 24, 34);
	printinfo(&Tri1);
	printinfo(&rightTr1);
	printinfo(&isoscelesTr1);
	printinfo(&equilateralTr1);
	printinfo(&Quadrangle1);
	printinfo(&Rect1);
	printinfo(&Box1);
	printinfo(&Parallelogram1);
	printinfo(&Romb1);
}
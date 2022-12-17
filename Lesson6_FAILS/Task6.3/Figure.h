#pragma once
#include <string>
#include "Figure.h"

class Figure
{
protected:
	std::string Shape;
	bool FSide = false;
	int A = 0;
	int B = 0;
	int C = 0;
	int D = 0;
	int AngA = 0;
	int AngB = 0;
	int AngC = 0;
	int AngD = 0;
public:
	std::string getFigure();
	int getFSide();
	int getA();
	int getB();
	int getC();
	int getD();
	int getAngA();
	int getAngB();
	int getAngC();
	int getAngD();
};


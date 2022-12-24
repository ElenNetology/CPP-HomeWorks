#include <iostream>
#include "Print.h"

void printinfo(Figure* figure)
{
	std::cout << std::endl;
	std::cout << figure->getFigure() << ":" << std::endl;
	std::cout << "Стороны:";
	std::cout << " a = " << figure->getA() << ", b = " << figure->getB() << ", с = " << figure->getC();
	if (figure->getFSide())
	{
		std::cout << ", d = " << figure->getD() << std::endl;
	}
	else {
		std::cout << std::endl;
	}
	std::cout << "Углы:";
	std::cout << " А = " << figure->getAngA() << ", В = " << figure->getAngB() << ", С = " << figure->getAngC();
	if (figure->getFSide()) { std::cout << ", D = " << figure->getAngD() << std::endl; }
	else { std::cout << std::endl; }
}
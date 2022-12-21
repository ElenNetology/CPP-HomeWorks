#include <iostream>
#include "Print.h"

void printinfo(Figure* figure)
{
	std::cout << std::endl;
	std::cout << figure->getFigure() << ":" << std::endl;
	std::cout << "�������:";
	std::cout << " a = " << figure->getA() << ", b = " << figure->getB() << ", � = " << figure->getC();
	if (figure->getFSide())
	{
		std::cout << ", d = " << figure->getD() << std::endl;
	}
	else {
		std::cout << std::endl;
	}
	std::cout << "����:";
	std::cout << " � = " << figure->getAngA() << ", � = " << figure->getAngB() << ", � = " << figure->getAngC();
	if (figure->getFSide()) { std::cout << ", D = " << figure->getAngD() << std::endl; }
	else { std::cout << std::endl; }
}
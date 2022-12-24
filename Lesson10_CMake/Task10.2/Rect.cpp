#include "Rect.h"
Rect::Rect(int sideA, int sideB)
	: Quadrangle(sideA, sideB, sideA, sideB, 90, 90, 90, 90)
{
	Quadrangle::Shape = "Прямоугольник";
};
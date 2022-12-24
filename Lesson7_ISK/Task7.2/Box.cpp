#include "Box.h"

Box::Box(int sideA)
	: Quadrangle(sideA, sideA, sideA, sideA, 90, 90, 90, 90)
{
	Quadrangle::Shape = " вадрат";
}

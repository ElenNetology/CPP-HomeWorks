#include "Romb.h"

Romb::Romb(int sideA, int angA, int angB)
	: Quadrangle(sideA, sideA, sideA, sideA, angA, angB, angA, angB)
{
	Quadrangle::Shape = "Ромб";
}

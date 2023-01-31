#include "IStriangle.h"

IStriangle::IStriangle(int a, int b, int A, int B)
{
	this->a = a;
	this->c = a;
	this->b = b;
	this->A = A;
	this->C = A;
	this->B = B;
	name = "Isosceles triangle:";
}
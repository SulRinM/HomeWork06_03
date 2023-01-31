#include "Parallelogram.h"

Parallelogram::Parallelogram(int a, int b, int A, int B)
{
	this->a = this->c = a;
	this->b = this->d = b;
	this->A = this->C = A;
	this->B = this->D = B;
	name = "Parallelogram:";
}
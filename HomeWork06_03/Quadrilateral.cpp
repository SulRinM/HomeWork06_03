#include "Quadrilateral.h"

Quadrilateral::Quadrilateral()
{
	a = b = c = d = A = B = C = D = 0;
}
Quadrilateral::Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D)
{
	this->a = a;
	this->b = b;
	this->c = c;
	this->d = d;
	this->A = A;
	this->B = B;
	this->C = C;
	this->D = D;
	name = "Quadrilateral:";
}
void Quadrilateral::get_name()
{
	std::cout << name << "\n";
}
void Quadrilateral::get_sides()
{
	std::cout << "Sides: " << "a = " << a << ", " << "b = " << b << ", " << "c = "
		<< c << ", " << "d = " << d << "\n";
}
void Quadrilateral::get_angle()
{
	std::cout << "Angle: " << "A = " << A << ", " << "B = " << B << ", " << "C = "
		<< C << ", " << "D = " << D << "\n";
}
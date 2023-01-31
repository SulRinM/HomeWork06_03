#include "Triangle.h"

Triangle::Triangle(int a, int b, int c, int A, int B, int C)
{
	this->a = a;
	this->b = b;
	this->c = c;
	this->A = A;
	this->B = B;
	this->C = C;
	name = "Triangle:";
}
Triangle::Triangle()
{
	a = b = c = A = B = C = 0;
}
void Triangle::get_name()
{
	std::cout << name << "\n";
}
void Triangle::get_sides()
{
	std::cout << "Sides: " << "a = " << a << ", " << "b = " << b << ", " << "c = " << c << "\n";
}
void Triangle::get_angle()
{
	std::cout << "Angle: " << "A = " << A << ", " << "B = " << B << ", " << "C = " << C << "\n";
}
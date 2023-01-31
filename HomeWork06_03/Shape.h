#pragma once
#include <iostream>
#include <string>

class Shape
{
public:
	Shape()
	{
		a = b = 0;
		A = B = 0;
		name = "Shape:";
	}
	virtual void get_name()
	{
		std::cout << name << "\n";
	}
	virtual void get_sides()
	{
		std::cout << "sides:" << "a = " << a << ", " << "b = " << b << "\n";
	}
	virtual void get_angle()
	{
		std::cout << "angle:" << "A =" << A << ", " << "B = " << B << "\n";
	}
protected:
	int a, b;
	int A, B;
	std::string name;
};
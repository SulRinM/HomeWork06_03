#pragma once
#include "Shape.h"

// базовый класс четырехугольника
class Quadrilateral : public Shape
{
public:
	Quadrilateral();
	Quadrilateral(int a, int b, int c, int d, int A, int B, int C, int D);
	void get_name() override;
	void get_sides() override;
	void get_angle() override;
protected:
	int a;
	int b;
	int c;
	int d;
	int A;
	int B;
	int C;
	int D;
	std::string name;
};

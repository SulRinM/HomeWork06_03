#pragma once
#include "Rectangle.h"

//  вадрат
class Square : public Rectangle
{
public:
	Square(int a) : Rectangle(a, a)
	{
		name = "Square:";
	}
};

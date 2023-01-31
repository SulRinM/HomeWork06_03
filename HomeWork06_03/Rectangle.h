#pragma once
#include "Parallelogram.h"

// Прямоугольник 
class Rectangle : public Parallelogram
{
public:
	Rectangle(int a, int b) : Parallelogram(a, b, 90, 90)
	{
		name = "Rectangle:";
	}
};
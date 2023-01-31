#pragma once
#include "Parallelogram.h"

// Ромб
class Rhomb : public Parallelogram
{
public:
	Rhomb(int a, int A, int B) : Parallelogram(a, a, A, B)
	{
		name = "Rhomb:";
	}
};
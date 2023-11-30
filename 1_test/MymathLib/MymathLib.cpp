// MymathLib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include "MyMathLib.hpp"
#include <math.h>
#include <stdexcept>
// TODO: This is an example of a library function

double mySqrt(double x) {
	if (x < 0)
	{
		throw std::runtime_error(" negative argument");
	}
	return sqrt(x);
}
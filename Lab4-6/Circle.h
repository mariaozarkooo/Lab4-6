#pragma once

#define _USE_MATH_DEFINES

#include <math.h>
#include <iostream>

using namespace std;

class Circle
{
	
	double radius = 0;

public:

	Circle();

	Circle(double radius);

	double getArea();

	double getBorderLength();

	friend ostream& operator<<(ostream& o, Circle& c);

};


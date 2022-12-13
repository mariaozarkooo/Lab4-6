#pragma once

#include <iostream>

using namespace std;

class Square
{
	double side = 0;

public:

	Square();

	Square(double side);

	double getArea();

	double getBorderLength();

	friend ostream& operator<<(ostream& o, Square& s);

};


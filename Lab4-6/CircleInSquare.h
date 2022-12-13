#pragma once

#include "Circle.h"
#include "Square.h"

class CircleInSquare : public Square, public Circle
{
public:
	CircleInSquare();
	CircleInSquare(double squareSide);
	friend ostream& operator<<(ostream& o, CircleInSquare cis) {
		o << (Square&)cis << endl
			<< (Circle&)cis;
		return o;
	}
};


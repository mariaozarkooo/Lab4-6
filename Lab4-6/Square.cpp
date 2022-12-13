#include "Square.h"

Square::Square()
{
}

Square::Square(double side)
{
	this->side = side;
}

double Square::getArea()
{
	return side * side;
}

double Square::getBorderLength()
{
	return side * 4;
}

ostream& operator<<(ostream& o, Square& s)
{
	o << "Square side: " << s.side << endl;
	o << "Square area: " << s.getArea() << endl;
	o << "Square border length: " << s.getBorderLength();
	return o;
}

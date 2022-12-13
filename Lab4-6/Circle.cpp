#include "Circle.h"

Circle::Circle()
{
}

Circle::Circle(double radius)
{
	this->radius = radius;
}

double Circle::getArea()
{
	return M_PI * pow(radius, 2);
}

double Circle::getBorderLength()
{
	return M_PI * (2 * radius);
}

ostream& operator<<(ostream& o, Circle& c)
{
	o << "Circle radius: " << c.radius << endl;
	o << "Circle area: " << c.getArea() << endl;
	o << "Circle border length: " << c.getBorderLength();
	return o;
}

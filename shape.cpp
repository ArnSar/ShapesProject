#include "shape.h"


Shape::Shape(char x)
{
	if (x == 'C')
	{
		m_shape = eCircle;
	}
	else if (x == 'T')
	{
		m_shape = eTriangle;
	}
	else
	{
		m_shape = eRectangle;
	}
}

Shape::EShape Shape::getShape()
{
	return m_shape;
}
#include <iostream>
#include "shape.h"

std::string Shape::getShape()
{
	std::string whatShape;

	if (m_shape == 'T')
	{
		whatShape = "Triangle";
	}
	else if (m_shape == 'R')
	{
		whatShape = "Rectangle";
	}
	else
	{
		whatShape = "Circle";
	}
	return whatShape;
}
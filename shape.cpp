#include <iostream>
#include "shape.h"

bool Shape::getShape()
{
	bool isTriangle;

	if (m_shape == 'T')
	{
		isTriangle = true;
	}
	else
	{
		isTriangle = false;
	}

	return isTriangle;
}
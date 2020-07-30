#pragma once

class Shape
{
public:
	enum EShape
	{
		eCircle,
		eRectangle,
		eTriangle
	};


	Shape(char x);
	

	EShape getShape();

private:
	EShape m_shape;
};


void printOut();
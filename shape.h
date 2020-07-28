#pragma once

class Shape
{
public:
	Shape(char x)
	{
		m_shape = x;
	}
	bool getShape();
	
	char m_shape;


};


void printOut();
#pragma once

class Shape
{
public:
	Shape(char x)
	{
		m_shape = x;
	}
	std::string getShape();
	
	char m_shape;


};


void printOut();
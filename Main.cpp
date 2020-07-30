#include <iostream>
#include <fstream>
#include "shape.h"
#include <vector>
// comment so that master and branch1 are different
int main()
{

	int tNumber = 0;
	int rNumber = 0;
	int cNumber = 0;
	
	std::vector <Shape> myVector;

	std::fstream fs;
	fs.open("shape.txt");
	if (fs.is_open())
	{
		char shape;

		while (!fs.eof())
		{
			fs >> shape;
			Shape v1(shape);
			myVector.push_back(v1);
			
		}

		for (int i = 0; i < myVector.size(); i++)
		{
			Shape::EShape whatShape = myVector[i].getShape();
			
			
			
			if (whatShape == Shape::eTriangle)
			{
				tNumber = tNumber + 1;
			}
			else if (whatShape == Shape::eRectangle)
			{
				rNumber = rNumber + 1;
			}
			else
			{
				cNumber = cNumber + 1;
			}
		}
		
		std::cout << "The number of triangles is " << tNumber << std::endl;
		std::cout << "The number of rectangles is " << rNumber << std::endl;
		std::cout << "The number of circles is " << cNumber << std::endl;
	
	}

}
#include <iostream>
#include <fstream>
#include "shape.h"
#include <vector>

int main()
{
	enum EShape
	{
		eCircle,
		eRectangle,
		eTriangle
	};

	int tNumber = 0;
	int rNumber = 0;
	
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
			bool shapeFind = myVector[i].getShape();
			
			
			
			if (shapeFind == true)
			{
				tNumber = tNumber + 1;
			}
			else
			{
				rNumber = rNumber + 1;
			}
		}
		
		std::cout << "The number of triangles is " << tNumber << std::endl;
		std::cout << "The number of rectangles is " << rNumber << std::endl;
	
	}

}
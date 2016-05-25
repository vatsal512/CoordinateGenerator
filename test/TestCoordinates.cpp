#include <iostream>
#include "Coordinates.h"
int main()
{
	Coordinates c;
	
	c.CoGenerator(10,30);
	c.Print();
	std::cout<<c.coordinate[0][0]<<std::endl;
	return 0;
}
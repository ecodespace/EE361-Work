#include "Polygon.h"
#include <iostream>

int main() {

	Polygon * shapes[4];

	shapes[0] = new Rectangle(4.0, 2.0);

	shapes[1] = new Square(4.0);

	shapes[2] = new Triangle(4.0, 4.0, 4.0);

	shapes[3] = new Polygon;

	for (int i = 0; i < 4; ++i) {
		std::cout << shapes[i]->Area() << ", " << shapes[i]->Perimeter() << std::endl;
	}
	
	// Hold results on console window
	char c;
	std::cout << "Type 'q' and hit enter to quit: ";
	std::cin >> c;

	return 0;
	}
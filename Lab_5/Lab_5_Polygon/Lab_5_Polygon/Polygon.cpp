#include "Polygon.h"
#include <iostream>

// Constructor - POLYGON

Polygon::Polygon() {
	sides[0] = 0;
	}

// Area and Perimeter functions - POLYGON

float Polygon::Area() {
	//std::cout << "The area of this shape cannot be determined.\n";
	return -1;
	}

float Polygon::Perimeter() {
	//std::cout << "The perimeter of this shape cannot be determined.\n";
	return -1;
	}

// Constructor - TRIANGLE

Triangle::Triangle(float a, float b,float c) {
	sides[0] = a;
	sides[1] = b;
	sides[2] = c;
	}

// Area and Perimeter functions - TRIANGLE

float Triangle::Area() {
	// Use Heron's Formula
	float p = 0.5 * Perimeter();
	float area = sqrt(p*(p-sides[0])*(p-sides[1])*(p-sides[2]));
	return area;
	}

float Triangle::Perimeter() {
	float perimeter = sides[0] + sides[1] + sides[2];
	return perimeter;
	}

// Constructor - RECTANGLE

Rectangle::Rectangle(float l, float w) {
	sides[0] = l;
	sides[1] = w;
	sides[2] = l;
	sides[3] = w;
	}

Rectangle::Rectangle() {
	sides[0] = 0;
	sides[1] = 0;
	sides[2] = 0;
	sides[3] = 0;
	}

// Area and Perimeter functions - RECTANGLE

float Rectangle::Area() {
	float area = sides[0] * sides[1];
	return area;
	}

float Rectangle::Perimeter() {
	float perimeter = 2 * sides[0] + 2 * sides[1];
	return perimeter;
	}

// Constructor - SQUARE

Square::Square(float s) {
	sides[0] = s;
	sides[1] = s;
	sides[2] = s;
	sides[3] = s;
	}

// Area and Perimeter functions - SQUARE

float Square::Area() {
	float area = sides[0] * sides[1];
	return area;
	}

float Square::Perimeter() {
	float perimeter = 4 * sides[0];
	return perimeter;
	}
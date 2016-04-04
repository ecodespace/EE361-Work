#pragma once

class Polygon {
	public:
		Polygon();

		virtual float Area();
		virtual float Perimeter();

	private:
		float sides[1];
	};

class Triangle : public Polygon {
	public:
		Triangle(float a, float b, float c);

		virtual float Area();
		virtual float Perimeter();

	private:
		float sides[3];
	};

class Rectangle : public Polygon {
	public:
		Rectangle();
		Rectangle(float l, float w);

		virtual float Area();
		virtual float Perimeter();

	private:
		float sides[4];
	};

class Square : public Rectangle {
	public:
		Square(float s);

		virtual float Area();
		virtual float Perimeter();

	private:
		float sides[4];
	};
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Point.h"
using namespace std;

Point::Point()
{
	x = 0;
	y = 0;
	++created_objects;
}

Point::Point(int a, int b)
{
	x = a;
	y = b;
	++created_objects;
}

int Point::get_x() const
{
	return x;
}

int Point::get_y() const
{
	return y;
}

void Point::set_x(int a)
{
	x = a;
}

void Point::set_y(int b)
{
	y = b;
}

void Point::print() const
{
	cout << "X: " << x << "\tY: " << y << endl;
}

void Point::number_of_objects()
{
	cout << "Number of objects: " << created_objects << endl;
}

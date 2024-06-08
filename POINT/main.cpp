#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Point.h"
using namespace std;

int main()
{
	Point a(20, 30), b(1, 2);
	a.print();
	b.print();

	Point::number_of_objects();
}
#pragma once
#include<iostream>
using namespace std;

class Point
{
private:
	int x;
	int y;
	static int created_objects;
public:
	Point();
	Point(int a, int b);

	Point sum(Point& b);
	Point operator + (int b);
	Point operator * (Point& b);
	Point operator * (int b);
	Point operator / (int b);
	Point operator / (Point& b);
	Point& operator ++();          // ++a Префиксная форма инкремента
	Point operator ++(int);        // a++ Постфиксная форма инкремента
	Point& operator += (int b);
	bool operator > (Point& b);

	~Point();

	int get_x()const;
	int get_y()const;
	void set_x(int a);
	void set_y(int b);
	void print()const;

	static void number_of_objects();
};


#pragma once
#include <iostream>
#include <string>
#include <sstream>

#pragma pack(1)

using namespace std;

class Point
{
	double x, y;
public:
	Point();
	Point(double, double);
	Point(const Point&);

	void SetX(double);
	void SetY(double);

	double GetX() const;
	double GetY() const;

	friend ostream& operator << (ostream&, const  Point&);
	friend istream& operator >> (istream&, Point&);
	operator string() const;

	friend Point operator + (const Point&, const Point&);
	friend Point operator - (const Point&, const Point&);
	Point& operator = (const Point&);
	friend bool operator == (const Point&, const Point&);
	friend bool operator != (const Point&, const Point&);
};


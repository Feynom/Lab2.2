#include "Point.h"

Point::Point() { x = 0, y = 0; };
Point::Point(double x = 0, double y = 0) { this->x = x, this->y = y; }
Point::Point(const Point& C) { x = C.GetX(), y = C.GetY(); }

void Point::SetX(double x) { this->x = x; }
void Point::SetY(double y) { this->y = y; }

double Point::GetX() const { return x; }
double Point::GetY() const { return y; }

Point::operator string() const
{
	stringstream ss;
	ss << "X of Dot is equal to " << x << endl;
	ss << "Y of Dot is equal to " << y << endl;
	return ss.str();
}
ostream& operator << (ostream& out, const Point& C)
{
	out << string(C);
	return out;
}
istream& operator >> (istream& in, Point& C)
{
	cout << "Enter the first coordinate of the point: "; in >> C.x;
	cout << "Enter the second coordinate of the point: "; in >> C.y;
	return in;
}

Point operator + (const Point& A, const Point& B)
{
	Point C(A.x + B.x, A.y + B.y);
	return C;
}
Point operator - (const Point& A, const Point& B)
{
	Point C(A.x - B.x, A.y - B.y);
	return C;
}
Point& Point::operator = (const Point& A)
{
	x = A.x;
	y = A.y;

	return *this;
}
bool operator == (const Point& A, const Point& B)
{
	if (A.x == B.x && A.y == B.y)
		return 1;
	else
		return 0;
}
bool operator != (const Point& A, const Point& B)
{
	return !(A == B);
}
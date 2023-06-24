#pragma once
#include "Point.h"

class Plane : public Object_in_space
{
private:
	Point first, second, third;
public:

	Plane();

	Plane(Point first, Point second, Point third, string name);

	void Input();

	friend void operator << (ostream& o, Plane plane);

	bool Point_on_plane(Point point);

	Point Get_first_point();

	Point Get_second_point();

	Point Get_third_point();
};




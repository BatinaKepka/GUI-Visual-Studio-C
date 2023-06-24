#pragma once
#include "MyPoint.h"

class Triangle : public Object_in_space
{
private:
	MyPoint first, second, third;
public:

	Triangle();

	Triangle(MyPoint first, MyPoint second, MyPoint third, string name);

	void Input();	

	float Perimeter();

	void Perimeter(float *perimeter);

	void Perimeter(float &perimeter);

	float Area();

	MyPoint Get_first_point();

	MyPoint Get_second_point();

	MyPoint Get_third_point();
};


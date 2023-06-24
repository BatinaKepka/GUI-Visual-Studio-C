#pragma once
#include "MyPoint.h"

class Sphere : public Object_in_space
{
private:
	MyPoint centre;
	float radius;
public:
	Sphere();

	Sphere(MyPoint centre, float radius, string name);

	void Input();	

	bool Point_on_Sphere(MyPoint point);

	MyPoint GetCentre();

	float GetRadius();
};



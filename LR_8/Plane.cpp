#include "Plane.h"
#include <iostream>
using namespace std;

Plane::Plane():Object_in_space()
{

}

Plane::Plane(Point first, Point second, Point third, string name) : Object_in_space(name)
{
	this->first = first;
	this->second = second;
	this->third = third;
}

void Plane::Input()
{
	first.Input();
	second.Input();
	third.Input();
	Name = first.getName()+ "-" + second.getName() + "-" + third.getName();
}

bool Plane::Point_on_plane(Point point)
{
	float x = (point.getX() - first.getX()) * ((second.getY() - first.getY()) * (third.getZ() - first.getZ()) - (second.getZ() - first.getZ()) * (third.getY() - first.getY()));
	float y = (point.getY() - first.getY()) * ((second.getX() - first.getX()) * (third.getZ() - first.getZ()) - (second.getZ() - first.getZ()) * (third.getX() - first.getX()));
	float z = (point.getZ() - first.getZ()) * ((second.getX() - first.getX()) * (third.getY() - first.getY()) - (second.getY() - first.getY()) * (third.getX() - first.getX()));
	if ((x + y + z) == 0)
	{
		printf("\nТочка лежит на плоскости!");
		return true;
	}
	else
	{
		printf("\nТочка не лежит на плоскости!");
		return false;
	}
}

Point Plane::Get_first_point()
{
	return first;
}
Point Plane::Get_second_point()
{
	return second;
}
Point Plane::Get_third_point()
{
	return third;
}

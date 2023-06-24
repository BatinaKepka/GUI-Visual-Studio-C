#include "MyPoint.h"
#include <math.h>
#include <iostream>
using namespace std;

Object_in_space::Object_in_space()
{
	Name = "";
}

Object_in_space::Object_in_space(string name)
{
	Name = name;
}

string Object_in_space::getName()
{
	return this->Name;
}

MyPoint::MyPoint() :Object_in_space()
{
	x = 0;
	y = 0;
	z = 0;	
}

MyPoint::MyPoint(float x, float y, float z, string name):Object_in_space(name)
{
	this->x = x;
	this->y = y;
	this->z = z;	
}

void MyPoint::Input()
{
	float x, y, z;
	string name;
	cout << "Название: ";
	cin >> name;
	cout << "x = ";
	cin >> x;
	cout << "y = ";
	cin >> y;
	cout << "z = ";
	cin >> z;


	this->x = x;
	this->y = y;
	this->z = z;
	Name = name;
}

void MyPoint::Display()
{
	cout << endl << "Точка - " << Name << ", координыты: " << "x = " << x << " y = " << y << " z = " << z << endl;
}

float MyPoint::Distance_to_Point(MyPoint end)
{
	return sqrt(pow((end.x - this->x), 2) + pow((end.y - this->y), 2) + pow((end.z - this->z), 2));
}

bool MyPoint::More_distant(MyPoint second)
{
	MyPoint zero(0, 0, 0, "");
	if (this->Distance_to_Point(zero) > second.Distance_to_Point(zero))
	{
		return true;
	}
	else
	{
		return false;
	}
}

float MyPoint::getX()
{
	return this->x;
}

float MyPoint::getY()
{
	return this->y;
}

float MyPoint::getZ()
{
	return this->z;
}

MyPoint MyPoint::operator + (MyPoint b)
{
	MyPoint c;
	c.x = this->x + b.x;
	c.y = this->y + b.y;
	c.z = this->z + b.z;
	return c;
}

MyPoint& MyPoint::operator ++()
{
	this->x++;
	this->y++;
	this->z++;
	return *this;
}

MyPoint MyPoint::operator ++(int unused)
{
	MyPoint temp = *this;
	++*this;	
	return temp;
}




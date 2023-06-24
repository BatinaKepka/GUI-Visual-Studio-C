#include "Triangle.h"
#include <iostream>
using namespace std;

Triangle::Triangle() :Object_in_space()
{
	
}

Triangle::Triangle(MyPoint first, MyPoint second, MyPoint third, string name) :Object_in_space(name)
{
	this->first = first;
	this->second = second;
	this->third = third;	
}

void Triangle::Input()
{
	first.Input();
	second.Input();
	third.Input();
	Name = first.getName() + "-" + second.getName() + "-" + third.getName();
}

float Triangle::Perimeter()
{
	return first.Distance_to_Point(second) + first.Distance_to_Point(third) + second.Distance_to_Point(third);
}
void Triangle::Perimeter(float* perimeter)
{
	*perimeter = first.Distance_to_Point(second) + first.Distance_to_Point(third) + second.Distance_to_Point(third);
	cout << "\nВызван метод вычесления периметра, возврат значения через указатель!";
	return;
}
void Triangle::Perimeter(float  &perimeter)
{
	perimeter = first.Distance_to_Point(second) + first.Distance_to_Point(third) + second.Distance_to_Point(third);
	cout << "\nВызван метод вычесления периметра, возврат значения через ссылку!";
	return;
}

float Triangle::Area()
{
	float a = first.Distance_to_Point(second);
	float b = first.Distance_to_Point(third);
	float c = second.Distance_to_Point(third);
	float p = (a + b + c) / 2;
	return sqrt(p * (p - a) * (p - b) * (p - c));
}

MyPoint Triangle::Get_first_point()
{
	return first;
}
MyPoint Triangle::Get_second_point()
{
	return second;
}
MyPoint Triangle::Get_third_point()
{
	return third;
}





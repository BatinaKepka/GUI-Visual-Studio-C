#include "Line.h"
#include <iostream>
using namespace std;

Line::Line():Object_in_space()
{	
}

Line::Line(MyPoint first, MyPoint second, string name):Object_in_space(name)
{
	this->first = first;
	this->second = second;		
}

void Line::Input()
{

	this->first.Input();
	this->second.Input();
	this->Name = first.getName()+ "-" + second.getName();
}

void Line::Display()
{
	cout << "Название прямой: " << Name;
	cout << endl << "Первая точка:";
	first.Display();
	cout << "Вторая точка:" ;
	second.Display();
}

bool Line::Point_on_line(MyPoint point)
{
	float x, y, z;	
	try 
	{
		if (this->first.getX() == this->second.getX())
			throw exception("X кординаты точек прямой равны, возникло деление на ноль");
		x = (point.getX() - this->first.getX()) / (this->first.getX() - this->second.getX());						  
	}
	catch (const exception &ex) 
	{
		cout << endl << "Возникло исключения:" << ex.what() << endl;
		x = 0;
	}

	try
	{
		if (this->first.getY() == this->second.getY())
			throw exception("Y кординаты точек прямой равны, возникло деление на ноль");
		y = (point.getY() - this->first.getY()) / (this->first.getY() - this->second.getY());
	}
	catch (const exception& ex)
	{
		cout << endl << "Возникло исключения:" << ex.what() << endl;
		y = 0;
	}

	try
	{
		if (this->first.getZ() == this->second.getZ())
			throw exception("Z кординаты точек прямой равны, возникло деление на ноль");
		z = (point.getZ() - this->first.getZ()) / (this->first.getZ() - this->second.getZ());
	}
	catch (const exception& ex)
	{
		cout << endl << "Возникло исключения:" << ex.what() << endl;
		z = 0;
	}

	if ((x == y) && (y == z))
	{
		printf("\nТочка лежит на прямой!");
		return true;
	}
	else
	{
		printf("\nТочка не лежит на прямой!");
		return false;
	}
	
}

MyPoint Line::Get_first_point()
{
	return this->first;
}

MyPoint Line::Get_second_point()
{
	return this->second;
}
Line::~Line()
{		
}

Line_segment::Line_segment():Line()
{
	
}

Line_segment::Line_segment(MyPoint first, MyPoint second, string name)
{
	Line::Line(first, second, name);
	length = first.Distance_to_Point(second);
}

void Line_segment::Input()
{
	Line::Input();
	length = first.Distance_to_Point(second);
	cout << "Длинна: " << length << endl;
}
void Line_segment::Display()
{
	cout << "Название прямой: " << Name;
	cout << endl << "Первая точка:";
	first.Display();
	cout << "Вторая точка:";
	second.Display();
	cout << "Длинна отрезка: " << length <<endl;
}

float Line_segment::Get_length()
{
	return length;
}

Line_segment Line_segment::operator=(Line line)
{
	this->first = line.Get_first_point();
	this->second = line.Get_second_point();
	length = line.Get_first_point().Distance_to_Point(line.Get_second_point());
	return *this;
}





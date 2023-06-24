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
	cout << "�������� ������: " << Name;
	cout << endl << "������ �����:";
	first.Display();
	cout << "������ �����:" ;
	second.Display();
}

bool Line::Point_on_line(MyPoint point)
{
	float x, y, z;	
	try 
	{
		if (this->first.getX() == this->second.getX())
			throw exception("X ��������� ����� ������ �����, �������� ������� �� ����");
		x = (point.getX() - this->first.getX()) / (this->first.getX() - this->second.getX());						  
	}
	catch (const exception &ex) 
	{
		cout << endl << "�������� ����������:" << ex.what() << endl;
		x = 0;
	}

	try
	{
		if (this->first.getY() == this->second.getY())
			throw exception("Y ��������� ����� ������ �����, �������� ������� �� ����");
		y = (point.getY() - this->first.getY()) / (this->first.getY() - this->second.getY());
	}
	catch (const exception& ex)
	{
		cout << endl << "�������� ����������:" << ex.what() << endl;
		y = 0;
	}

	try
	{
		if (this->first.getZ() == this->second.getZ())
			throw exception("Z ��������� ����� ������ �����, �������� ������� �� ����");
		z = (point.getZ() - this->first.getZ()) / (this->first.getZ() - this->second.getZ());
	}
	catch (const exception& ex)
	{
		cout << endl << "�������� ����������:" << ex.what() << endl;
		z = 0;
	}

	if ((x == y) && (y == z))
	{
		printf("\n����� ����� �� ������!");
		return true;
	}
	else
	{
		printf("\n����� �� ����� �� ������!");
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
	cout << "������: " << length << endl;
}
void Line_segment::Display()
{
	cout << "�������� ������: " << Name;
	cout << endl << "������ �����:";
	first.Display();
	cout << "������ �����:";
	second.Display();
	cout << "������ �������: " << length <<endl;
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





#pragma once
#include "MyPoint.h"
#include <iostream>
using namespace std;

class Line : public Object_in_space
{
protected:
	MyPoint first, second;	
public:
	Line();

	Line(MyPoint first, MyPoint second, string name);

	virtual void Input();	

	bool Point_on_line(MyPoint point);

	MyPoint Get_first_point();

	MyPoint Get_second_point();	

	virtual void Display();	

	~Line();
};

class Line_segment : public Line
{
private:
	float length;
public:
	Line_segment();

	Line_segment(MyPoint first, MyPoint second, string name);

	void Input() override;	

	void Display() override;

	float Get_length();	

	Line_segment operator=(Line line);
};


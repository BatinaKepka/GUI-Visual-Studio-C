#pragma once
#include <iostream>

using namespace System;
using namespace std;

class Object_in_space
{
protected:
	string Name;
public:
	Object_in_space();
	Object_in_space(string name); 
	virtual void Input() = 0;
	string getName();
};

class MyPoint : public Object_in_space
{
private:
	float x, y, z;	

public:
	MyPoint();

	MyPoint(float x, float y, float z,string name);

	void Input();	

	void Display();

	float Distance_to_Point(MyPoint end);

	float getX();

	float getY();

	float getZ();		

	bool More_distant(MyPoint second);	
	
	MyPoint operator + (MyPoint b);

	MyPoint& operator ++();

	MyPoint operator ++(int unused);	
	
};







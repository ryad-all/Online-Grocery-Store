#pragma once
#include <iostream>
using namespace std;
#include <string>


class Grocery
{
private:
	string StoreName;
public:
	Grocery();
	Grocery(string);
	virtual ~Grocery(); //when polymorphism

	virtual void print() const = 0 ; //pure virtua which forces print functions of derived classes
		
	void setGroceryName(string);
};


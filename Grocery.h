#pragma once
#include <iostream>
using namespace std;
#include <string>


class Grocery
{
protected:
	string Name;
public:
	Grocery();
	Grocery(string);
	virtual ~Grocery();
	
	string getName();
	virtual void print() const = 0 ; 
	virtual float getCost() const = 0;
	
	void setGroceryName(string);
};


#pragma once
#include <iostream>
using namespace std;
#include <string>


class Grocery
{
private:
	string Name;
	float stock;
	float price;
public:
	Grocery();
	Grocery(const Grocery&);
	Grocery(string, float, float);
	virtual ~Grocery();
	virtual void setName(string);
	virtual void setPrice(float);
	virtual void setStock(float);
	virtual float getPrice() const = 0;
	virtual float getStock() const =0;
	string getName();
	virtual void print() const = 0 ; 
	virtual float getCost() const = 0;
	
	void setGroceryName(string);
};


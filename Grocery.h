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
	Grocery(float stk, float pr);
	Grocery();
	Grocery(const Grocery&);
	void updateStock(float);
	virtual ~Grocery();
	
	virtual string getName() const;
	void setName(string);
	virtual float getStock() const;
	virtual float getPrice() const;
	virtual void print() const; 
	virtual float getCost() const;
	
	
	
};


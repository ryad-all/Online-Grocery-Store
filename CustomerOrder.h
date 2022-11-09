#pragma once
#include "Grocery.h"
#include "Meat.h"
#include "Dairy.h"
#include "Beef.h"

class CustomerOrder
{
private:
	Grocery* groceryArray[20];
	static int OrderNumber;
	float orderCost;
public:
	CustomerOrder(Grocery** ptr, int);
	

	float getCost() const; 
};


#pragma once
#include "Grocery.h"
#include "Meat.h"
#include "Dairy.h"
#include "Fish.h"
#include "Beef.h"
#include "Chicken.h"
#include "Yogurt.h"
#include "Milk.h"
#include "Eggs.h"
#include "SeaBass.h"
#include "Salmon.h"
#include "Haddock.h"

class CustomerOrder
{
private:
	
	Grocery* groceryArray[11];
	
	static int OrderNumber;
	float orderCost;
public:
	bool insertProduct(Grocery* ptr);
	CustomerOrder();
	CustomerOrder(const CustomerOrder&);
	virtual ~CustomerOrder();

	float getCost() const; 
};


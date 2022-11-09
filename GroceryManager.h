#pragma once
#include "CustomerOrder.h"

class GroceryManager
{
private:
	Grocery* RootArray[50];
	CustomerOrder* orders[50];
public:
	GroceryManager();
	~GroceryManager();

	int search(string);
	bool insertProducts(Grocery*);
	bool insertOrders(CustomerOrder*);

};


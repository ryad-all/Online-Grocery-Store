#include "CustomerOrder.h"

int CustomerOrder::OrderNumber = 1;

CustomerOrder::CustomerOrder()
{
	for (int i = 0; i < 15;i++)
	{
		groceryArray[i] = nullptr;
	}
	orderCost = 0;
}

CustomerOrder::CustomerOrder(Grocery** ptr, int len) 
{
	orderCost = 0;
	for (int i = 0; i < len; i++)
	{
		groceryArray[i] = ptr[i];
		orderCost += ptr[i]->getCost();
	}
	OrderNumber++;
}

float CustomerOrder::getCost() const
{
	return orderCost;
}

CustomerOrder::~CustomerOrder()
{
	delete[] groceryArray;
	cout << "Class of Object CustomerOrder has been destroyed. \n";
}
#include "CustomerOrder.h"

int CustomerOrder::OrderNumber = 1;


CustomerOrder::CustomerOrder(Grocery** ptr, int len) 
{
	for (int i = 0; i < len; i++)
	{
		orderCost += ptr[i]->getCost();
	}
	OrderNumber++;
}

float CustomerOrder::getCost() const
{
	return orderCost;
}
#include "CustomerOrder.h"

int CustomerOrder::OrderNumber = 1;

CustomerOrder::CustomerOrder()
{
	for (int i = 0; i < 11;i++)
	{
		groceryArray[i] = nullptr;
	}
	orderCost = 0;
}

bool CustomerOrder::insertProduct(Grocery* ptr) 
{
	for (int i = 0; i < 11; i++)
	{
		if (groceryArray[i] == nullptr)
		{
			groceryArray[i] = ptr->CloneObject();
			
			orderCost += groceryArray[i]->getCost();
			OrderNumber++;
			return true;
		}
	}
	return false;
	
}
CustomerOrder::CustomerOrder(const CustomerOrder& cpy) 
{

	for (int i = 0; i < 11; i++)
	{
		if (groceryArray[i] == nullptr)
			groceryArray[i] = new Grocery(*cpy.groceryArray[i]);
	}
	orderCost = cpy.orderCost;
	OrderNumber = cpy.OrderNumber;
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
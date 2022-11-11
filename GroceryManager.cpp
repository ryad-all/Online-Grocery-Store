#include "GroceryManager.h"

GroceryManager::GroceryManager()
{
	for (int i = 0; i < 50; i++)
	{
		RootArray[i] = nullptr;
		orders[i] = nullptr;
	}
}

GroceryManager::~GroceryManager() {
	delete[] RootArray;
	delete[] orders;
	cout << "Object of class GroceryManager has been destoryed. \n";
}

int GroceryManager::search(string x)
{
	for (int i = 0; i < 50; i++)
	{
		if (RootArray[i] != nullptr)
			if (RootArray[i]->getName() == x)
			{
				return i;
			}
	}
	return -1;
}
bool GroceryManager::insertProducts(Grocery* x)
{
	for (int i = 0; i < 50; i++)
	{
		if (RootArray[i] == nullptr) {
			RootArray[i] = new Grocery(*x);
			return true;
		}
	}
	return false;
}
bool GroceryManager::insertOrders(CustomerOrder* x)
{
	for (int i = 0; i < 50; i++)
	{
		if (orders[i] == nullptr) {
			orders[i] = new CustomerOrder(*x);
			return true;
		}
	}
	return false;
}

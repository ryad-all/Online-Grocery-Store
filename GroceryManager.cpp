#include "GroceryManager.h"

GroceryManager::GroceryManager()
{
	for (int i = 0; i < 50; i++)
	{
		RootArray[i] = nullptr;
		orders[i] = nullptr;
	}
}

GroceryManager::GroceryManager()
{

}
GroceryManager::~GroceryManager() {
	delete[] RootArray;
	delete[] orders;
	cout << "Object of class GroceryManager has been destoryed. \n";
}

int GroceryManager::Grsearch(string);
bool GroceryManager::insertProducts(Grocery*);
bool GroceryManager::insertOrders(CustomerOrder*);

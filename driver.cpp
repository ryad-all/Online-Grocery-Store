#include "GroceryManager.h"

int main()
{

	Grocery* arr[11];
	for (int i = 0; i < 11; i++)
	{
		arr[i] = nullptr; 
	}

	arr[0] = new Beef(100, 15, 2.5);
	arr[1] = new Chicken(200, 10, 4);

	cout << arr[0]->getName();
	CustomerOrder* order1 = new CustomerOrder();
	order1->insertProduct(arr[0]);

	GroceryManager* manager = new GroceryManager();

	if (manager->insertOrders(order1))
	{
		cout << "done";
	}
	else
		cout << "not done";



	return 0;
}
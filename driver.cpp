#include "GroceryManager.h"

int main()
{

	Grocery* arr1[11];
	for (int i = 0; i < 11; i++)
	{
		arr1[i] = nullptr; 
	}
	arr1[0] = new Beef(100, 15, 2.5);
	arr1[1] = new Chicken(200, 10, 4);
	arr1[2] = new Cheese(30, 25, 1.1);
	arr1[3] = new Milk(200, 2, 6);
	arr1[4] = new Eggs(40, 3, 2);


	
	CustomerOrder* order1 = new CustomerOrder();
	if (order1->insertProduct(arr1[0]))
		cout << arr1[0]->getName() << "product inserted in your order. \n";
	if (order1->insertProduct(arr1[1]))
		cout << arr1[1]->getName() << "product inserted in your order. \n";
	if (order1->insertProduct(arr1[2]))
		cout << arr1[2]->getName() << "product inserted in your order. \n";
	if (order1->insertProduct(arr1[3]))
		cout << arr1[3]->getName() << "product inserted in your order. \n";
	if (order1->insertProduct(arr1[4]))
		cout << arr1[4]->getName() << "product inserted in your order. \n";

	cout << "-------------------------------------------------------------------------\n";

	GroceryManager* manager = new GroceryManager(); // data manger creation

	if (manager->insertOrders(order1))
		cout << "Orders inserted in data manager. \n";

	cout << "-------------------------------------------------------------------------\n";

	if (manager->insertProducts(arr1[0]))
		cout << arr1[0]->getName() << "product inserted in data manager. \n";
	if (manager->insertProducts(arr1[1]))
		cout << arr1[1]->getName() << "product inserted in data manager. \n";
	if (manager->insertProducts(arr1[2]))
		cout << arr1[2]->getName() << "product inserted in data managerr. \n";
	if (manager->insertProducts(arr1[3]))
		cout << arr1[3]->getName() << "product inserted in data manager. \n";
	if (manager->insertProducts(arr1[4]))
		cout << arr1[4]->getName() << "product inserted in data manager. \n";

	cout << "-------------------------------------------------------------------------\n";
	if (manager->search("Beef") != -1)
	{
		cout << "the element is in postion " << manager->search("Beef") << " of the array. \n";
	}


	return 0;
}
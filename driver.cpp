#include "GroceryManager.h"

int main()
{
	GroceryManager* manager = new GroceryManager(); // data manger creation
	Grocery* arr1[11];
	for (int i = 0; i < 11; i++)
	{
		arr1[i] = nullptr; 
	}
	Grocery* arr2[11];
	for (int i = 0; i < 11; i++)
	{
		arr2[i] = nullptr;
	}
	// in the constructor price may vary depending on the store in which the the admin is could specify the amount for each product.
	// constructor overload is (float stock, float price, float customer requested amount of product)
	arr1[0] = new Beef(100, 15, 2.5);
	arr1[1] = new Chicken(200, 10, 4);
	arr1[2] = new Cheese(30, 25, 1.1);
	arr1[3] = new Milk(200, 2, 6);
	arr1[4] = new SeaBass(40, 15, 2.8);

	arr2[0] = new Eggs(40, 3, 2);
	arr2[1] = new Beans(40, 1.5, 3);
	arr2[2] = new Haddock(30, 20, 3);
	arr2[3] = new Salmon(40, 28, 2);
	arr2[4] = new Strawberries(40, 3, 2);
	arr2[5] = new Yogurt(40, 3, 2);


	cout << "ORDER 1\n";
	CustomerOrder* order1 = new CustomerOrder();
	if (order1->insertProduct(arr1[0]))
		cout << arr1[0]->getName() << " product inserted in your order. \n";
	if (order1->insertProduct(arr1[1]))
		cout << arr1[1]->getName() << " product inserted in your order. \n";
	if (order1->insertProduct(arr1[2]))
		cout << arr1[2]->getName() << " product inserted in your order. \n";
	if (order1->insertProduct(arr1[3]))
		cout << arr1[3]->getName() << " product inserted in your order. \n";
	if (order1->insertProduct(arr1[4]))
		cout << arr1[4]->getName() << " product inserted in your order. \n";
	cout << "Total cost of order is : " << order1->getCost() << "$ .\n";
	if (manager->insertOrders(order1))
		cout << "Orders inserted in data manager! \n";
	cout << "-------------------------------------------------------------------------\n";
	cout << "ORDER 2\n";
	CustomerOrder* order2 = new CustomerOrder();
	if (order2->insertProduct(arr2[0]))
		cout << arr2[0]->getName() << " product inserted in your order. \n";
	if (order2->insertProduct(arr2[1]))
		cout << arr2[1]->getName() << " product inserted in your order. \n";
	if (order2->insertProduct(arr2[2]))
		cout << arr2[2]->getName() << " product inserted in your order. \n";
	if (order2->insertProduct(arr2[3]))
		cout << arr2[3]->getName() << " product inserted in your order. \n";
	if (order2->insertProduct(arr2[4]))
		cout << arr2[4]->getName() << " product inserted in your order. \n";
	if (order2->insertProduct(arr2[5]))
		cout << arr2[5]->getName() << " product inserted in your order. \n";
	cout << "Total cost of order is : " << order2->getCost() << "$ .\n";
	if (manager->insertOrders(order2))
		cout << "Orders inserted in data manager! \n";

	cout << "-------------------------------------------------------------------------\n";
	////here, i am updating the stock 
	//arr1[0] = new Beef(arr1[0]->getCost(), 15, 2.5);
	//arr1[1] = new Chicken(arr1[0]->getCost(), 10, 4);
	//arr1[2] = new Cheese(arr1[0]->getCost(), 25, 1.1);
	//arr1[3] = new Milk(arr1[0]->getCost(), 2, 6);
	//arr1[4] = new SeaBass(arr1[0]->getCost(), 15, 2.8);

	//arr2[0] = new Eggs(arr2[0]->getCost(), 3, 2);
	//arr2[1] = new Beans(arr2[1]->getCost(), 1.5, 3);
	//arr2[2] = new Haddock(arr2[2]->getCost(), 20, 3);
	//arr2[3] = new Salmon(arr2[3]->getCost(), 28, 2);
	//arr2[4] = new Strawberries(arr2[4]->getCost(), 3, 2);
	//arr2[5] = new Yogurt(arr2[5]->getCost(), 3, 2);
	if (manager->insertProducts(arr1[0]))
		cout << arr1[0]->getName() << " product inserted in data manager. \n";
	if (manager->insertProducts(arr1[1]))
		cout << arr1[1]->getName() << " product inserted in data manager. \n";
	if (manager->insertProducts(arr1[2]))
		cout << arr1[2]->getName() << " product inserted in data managerr. \n";
	if (manager->insertProducts(arr1[3]))
		cout << arr1[3]->getName() << " product inserted in data manager. \n";
	if (manager->insertProducts(arr1[4]))
		cout << arr1[4]->getName() << " product inserted in data manager. \n";
	if (manager->insertProducts(arr2[0]))
		cout << arr2[0]->getName() << " product inserted in data manager. \n";
	if (manager->insertProducts(arr2[1]))
		cout << arr2[1]->getName() << " product inserted in data manager. \n";
	if (manager->insertProducts(arr2[2]))
		cout << arr2[2]->getName() << " product inserted in data managerr. \n";
	if (manager->insertProducts(arr2[3]))
		cout << arr2[3]->getName() << " product inserted in data manager. \n";
	if (manager->insertProducts(arr2[4]))
		cout << arr2[4]->getName() << " product inserted in data manager. \n";
	if (manager->insertProducts(arr2[5]))
		cout << arr2[5]->getName() << " product inserted in data manager. \n";

	cout << "-------------------------------------------------------------------------\n";
	if (manager->search("Beef") != -1)
	{
		cout << "the element is in postion " << manager->search("Beef") << " of the array. \n";
	}
	if (manager->search("Grocery") != -1)
	{
		cout << "the element is in postion " << manager->search("Grocery") << " of the array. \n";
	}
	



	return 0;
}
#include "VegetablesAndFruits.h"

VegetablesAndFruits::VegetablesAndFruits() : Grocery()
{
	price = 15;
	stock = 0;
}
VegetablesAndFruits::VegetablesAndFruits(float y, float z) : Grocery()
{
	this->setName("VegetablesAndFruits");
	stock = y;
	price = 15;
}
VegetablesAndFruits::VegetablesAndFruits(const VegetablesAndFruits& copy) : Grocery(copy)
{
	stock = copy.stock;
	price = 15;
}


void  VegetablesAndFruits::updateStock(float x)
{
	if (x <= stock)
		stock -= x;
}


float VegetablesAndFruits::getStock() const
{
	return stock;
}
float VegetablesAndFruits::getPrice() const
{
	return price;
}
VegetablesAndFruits::~VegetablesAndFruits()
{
	cout << "Object of class VegetablesAndFruits has been destoryed. \n";
}

void VegetablesAndFruits::print() const
{
	cout << "Strawberries\n";
}

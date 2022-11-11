#include "VegetablesAndFruits.h"

VegetablesAndFruits::VegetablesAndFruits() : Grocery()
{
	this->setName("VegetablesAndFruits");
}
VegetablesAndFruits::VegetablesAndFruits(float y, float z) : Grocery()
{
	this->setName("VegetablesAndFruits");

}
VegetablesAndFruits::VegetablesAndFruits(const VegetablesAndFruits& copy) : Grocery(copy)
{
}

Grocery* VegetablesAndFruits::CloneObject()
{
	return new VegetablesAndFruits(*this);
}

VegetablesAndFruits::~VegetablesAndFruits()
{
	cout << "Object of class VegetablesAndFruits has been destoryed. \n";
}

void VegetablesAndFruits::print() const
{
	cout << "Strawberries\n";
}

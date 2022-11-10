#include "VegetablesAndFruits.h"

VegetablesAndFruits::VegetablesAndFruits() : Grocery()
{

}
VegetablesAndFruits::VegetablesAndFruits(float y, float z) : Grocery()
{
	this->setName("VegetablesAndFruits");

}
VegetablesAndFruits::VegetablesAndFruits(const VegetablesAndFruits& copy) : Grocery(copy)
{
}



VegetablesAndFruits::~VegetablesAndFruits()
{
	cout << "Object of class VegetablesAndFruits has been destoryed. \n";
}

void VegetablesAndFruits::print() const
{
	cout << "Strawberries\n";
}

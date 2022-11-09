#include "VegetablesAndFruits.h"

VegetablesAndFruits::VegetablesAndFruits() : Grocery("VegetablesAndFruits") {}

VegetablesAndFruits::VegetablesAndFruits(string str) : Grocery(str) {}

VegetablesAndFruits::~VegetablesAndFruits()
{
	cout << "Object of class Vegetables and Fruits has been destroyed. \n";
}

void VegetablesAndFruits::print() const
{
	cout << "Class VegetablesAndFruits. \n";
}
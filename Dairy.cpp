#include "Dairy.h"

Dairy::Dairy() : Grocery()
{
	this->setName("Dairy");
}
Dairy::Dairy(float y, float z) : Grocery(y, z)
{

}
Dairy::Dairy(const Dairy& copy) : Grocery(copy)
{
	this->setName("Dairy");
}
Dairy::~Dairy()
{
	cout << "Object of class Dairy has been destoryed. \n";
}

void Dairy::print() const
{
	cout << "Milk, Yogurt, cheese and eggs\n";
}

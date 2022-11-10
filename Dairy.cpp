#include "Dairy.h"

Dairy::Dairy() : Grocery()
{
}
Dairy::Dairy(float y, float z) : Grocery(y, z)
{
	this->setName("Dairy");

}
Dairy::Dairy(const Dairy& copy) : Grocery(copy)
{

}
Dairy::~Dairy()
{
	cout << "Object of class Dairy has been destoryed. \n";
}

void Dairy::print() const
{
	cout << "Milk, Yogurt, cheese and eggs\n";
}

#include "Fish.h"

Fish::Fish() : Meat() { this->setName("Fish"); }

Fish::Fish(float x, float y)  : Meat(x, y)
{	
	
}
Fish::Fish(const Fish& copy) : Meat(copy)
{
	this->setName("Fish");

}
Fish::~Fish()
{
	cout << "Object of class Fish has been destoryed. \n";
}





void Fish::print() const
{
	cout << "SeaBass, Salmon and Haddock\n";
}

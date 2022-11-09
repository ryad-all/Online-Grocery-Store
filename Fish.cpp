#include "Fish.h"

Fish::Fish()  {}
Fish::Fish() : Meat("Fish")
{

}
Fish::~Fish()
{
	cout << "Object of class Fish has been destoryed. \n";
}

void Fish::print() const
{
	cout << "Class Fish.\n";
}

#include "Dairy.h"

Dairy::Dairy() : Grocery("Dairy")
{}

Dairy::Dairy(string str) : Grocery(str) {}

void Dairy::print() const
{
	cout << "Class Dairy. \n";
}

Dairy::~Dairy()
{
	cout << "Object of class Dairy has been destroyed. \n"; 
}
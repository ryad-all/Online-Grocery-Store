#include "Pantry.h"

Pantry::Pantry() : Grocery("Pantry") {}

Pantry::Pantry(string str) : Grocery(str)
{}

void Pantry::print() const
{
	cout << "Class Pantry. \n";
}

Pantry::~Pantry()
{
	cout << "Object of class Pantry has been destroyed. \n";
}
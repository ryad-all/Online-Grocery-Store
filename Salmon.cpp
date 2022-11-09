#include "Salmon.h"

Salmon::Salmon(float x)
	:SalmonStock(50), SalmonPrice(28), CustomerPriceSalmon(0)
{
	if (SalmonStock >= x)
		CustomerPriceSalmon *= SalmonPrice;
	SalmonStock -= x;
}


void Salmon::setSalmonStock(float x)
{
	SalmonStock = x;
}
void Salmon::setSalmonPrice(float x)
{
	SalmonPrice = x;
}

float Salmon::getSalmonStock() const
{
	return SalmonStock;
}
float Salmon::getSalmonPrice() const
{
	return SalmonPrice;
}

float Salmon::getCost() const // customer ammount in kg 
{
	return CustomerPriceSalmon;
}
void Salmon::print() const
{
	cout << "The current Salmon stock is " << this->SalmonStock << " kg" << "  and its price per Kg is " << this->SalmonPrice << endl;
}

Salmon::~Salmon()
{
	cout << "Object of class Salmon has been desroyed. \n";
}
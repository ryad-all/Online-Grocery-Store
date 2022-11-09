#include "Strawberries.h"


Strawberries::Strawberries(float x)
	:VegetablesAndFruits("Strawberries"), StrawberriesStock(50), StrawberriesPrice(2), CustomerPriceStrawberries(0)
{
	StrawberriesStock -= x;
	if (StrawberriesStock <= x)
		CustomerPriceStrawberries *= StrawberriesPrice;
}


void Strawberries::setStrawberriesStock(float x)
{
	StrawberriesStock = x;
}
void Strawberries::setStrawberriesPrice(float x)
{
	StrawberriesPrice = x;
}


float Strawberries::getStrawberriesStock() const
{
	return StrawberriesStock;
}
float Strawberries::getStrawberriesPrice() const
{
	return StrawberriesPrice;
}

float Strawberries::getCost() const // customer ammount in kg 
{
	return CustomerPriceStrawberries;
}
void Strawberries::print() const
{
	cout << "The current Strawberries stock is " << this->StrawberriesStock << " dozens" << "  and its price per dozen is " << this->StrawberriesPrice << endl;
}

Strawberries::~Strawberries()
{
	cout << "Object of class Strawberries has been desroyed. \n";
}
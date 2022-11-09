#include "SeaBass.h"

SeaBass::SeaBass(float x)
	: Fish("SeaBass"), SeaBassStock(40), SeaBassPrice(15), CustomerPriceSeaBass(0)
{

	if (SeaBassStock >= x)
		CustomerPriceSeaBass *= SeaBassPrice;
	SeaBassStock -= x;
	
}


void SeaBass::setSeaBassStock(float x)
{
	SeaBassStock = x;
}
void SeaBass::setSeaBassPrice(float x)
{
	SeaBassPrice = x;
}

float SeaBass::getSeaBassStock() const
{
	return SeaBassStock;
}
float SeaBass::getSeaBassPrice() const
{
	return SeaBassPrice;
}

float SeaBass::getCost() const// customer ammount in kg 
{
	return CustomerPriceSeaBass;
}
void SeaBass::print() const
{
	cout << "The current SeaBass stock is " << this->SeaBassStock << " kg" << "  and its price per Kg is " << this->SeaBassPrice << endl;
}

SeaBass::~SeaBass()
{
	cout << "Object of class SeaBass has been desroyed. \n";
}
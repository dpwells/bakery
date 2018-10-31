#include "LayerCake.h"

using namespace std;

LayerCake::LayerCake(string flavorIn, string frostingIn, int layerQuantityIn)
{
	const double ADD_LAYER_COST = 3.00;
	const double LAYER_CAKE_PRICE = 9.00;
	layerQuantity = layerQuantityIn;
	basePrice = LAYER_CAKE_PRICE + ((layerQuantity - 1) * ADD_LAYER_COST);
	flavor = flavorIn;
	frosting = frostingIn;
	if (frostingIn == "cream-cheese")
	{
		CreamCheeseAddIn();
	}
}
LayerCake::LayerCake()
{
	layerQuantity = 0;
}
LayerCake::~LayerCake()
{

}

string LayerCake::GetFlavor()
{
	return flavor;
}
int LayerCake::GetLayerQuantity()
{
	return layerQuantity;
}
string LayerCake::ToString()
{
	ostringstream oss;
	oss << layerQuantity << "-layer " << flavor << " cake with ";
	oss << frosting << " frosting " << BakedGood::ToString();

	return oss.str();
}
double  LayerCake::GetDiscountPrice(int quantityIn)
{
	const double DISCOUNT_AMOUNT = 2.00;
	const int DISCOUNT_THRESHOLD = 3;

	if (quantityIn >= DISCOUNT_THRESHOLD)
	{
		return quantityIn * (basePrice - DISCOUNT_AMOUNT);
	}

	return basePrice * quantityIn;
}

void LayerCake::SetFlavor(string flavorIn)
{
	flavor = flavorIn;
}
void LayerCake::SetLayerQuantity(int layerQuantityIn)
{
	layerQuantity = layerQuantityIn;
}
void LayerCake::CreamCheeseAddIn()
{
	const double CREAM_CHEESE_COST = 1.00;
	basePrice = basePrice + (layerQuantity * CREAM_CHEESE_COST);
}
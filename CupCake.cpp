#include "CupCake.h"

using namespace std;

CupCake::CupCake(string flavorIn, string frostingIn, string sprinkleColorIn)
{
	const double CUP_CAKE_PRICE = 1.95;
	basePrice = CUP_CAKE_PRICE;
	flavor = flavorIn;
	sprinkleColor = sprinkleColorIn;
	frosting = frostingIn;
	if (frostingIn == "cream-cheese")
	{
		CreamCheeseAddIn();
	}
}
CupCake::CupCake()
{
	sprinkleColor = "none";
}
CupCake::~CupCake()
{

}

string CupCake::GetFlavor()
{
	return flavor;
}
string CupCake::GetSprinkleColor()
{
	return sprinkleColor;
}
string CupCake::ToString()
{
	ostringstream oss;
	oss << flavor << " cupcake with " << frosting << " frosting and ";
	oss << sprinkleColor << " sprinkles" << BakedGood::ToString();
	return oss.str();
}
double  CupCake::GetDiscountPrice(int quantityIn)
{
	const double TIER_ONE_DISCOUNT = 0.30;
	const double TIER_TWO_DISCOUNT = 0.40;
	const int FIRST_TIER_THRESHOLD = 2;
	const int SECOND_TIER_THRESHOLD = 4;

	if (quantityIn >= FIRST_TIER_THRESHOLD && quantityIn < SECOND_TIER_THRESHOLD)
	{
		return quantityIn * (basePrice - TIER_ONE_DISCOUNT);
	}

	if (quantityIn >= SECOND_TIER_THRESHOLD)
	{
		return quantityIn * (basePrice - TIER_TWO_DISCOUNT);
	}

	return basePrice;
}

void CupCake::SetFlavor(string flavorIn)
{
	flavor = flavorIn;
}
void CupCake::SetSprinkleColor(string colorIn)
{
	sprinkleColor = colorIn;
}
void CupCake::CreamCheeseAddIn()
{
	const double CREAM_CHEESE_COST = 0.20;
	basePrice += CREAM_CHEESE_COST;

}
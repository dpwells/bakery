#include "Bread.h"

using namespace std;

Bread::Bread(string breadTypeIn)
{
	double const BREAD_PRICE = 4.50;
	basePrice = BREAD_PRICE;
	breadType = breadTypeIn;
}
Bread::Bread()
{
	breadType = "none";
}
Bread::~Bread()
{

}

string Bread::GetBreadType()
{
	return breadType;
}

string Bread::ToString()
{
	ostringstream oss;
	oss << breadType << " bread " << BakedGood::ToString();
	return oss.str();
}
double  Bread::GetDiscountPrice(int quantityIn)
{
	const int DISCOUNT_THRESHOLD = 3;
	int freeLoaves = 0;
	freeLoaves = quantityIn / DISCOUNT_THRESHOLD;
	return (quantityIn - freeLoaves) * basePrice;

}

void Bread::SetPrice(double priceIn)
{
	basePrice = priceIn;
}
void Bread::SetBreadType(string breadIn)
{
	breadType = breadIn;
}

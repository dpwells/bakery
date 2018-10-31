#include "BakedGood.h"

using namespace std;

BakedGood::BakedGood()
{
	basePrice = 0.00;
}
BakedGood::~BakedGood()
{

}

string BakedGood::ToString()
{
	const int DECIMAL_PLACES = 2;
	ostringstream oss;
	oss << " ($" << fixed << setprecision(DECIMAL_PLACES) << basePrice << ")";
	return oss.str();
}

double BakedGood::GetPrice()
{

	return basePrice;
}
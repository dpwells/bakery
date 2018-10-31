#pragma once
#include "BakedGood.h"

using namespace std;
class Bread : public BakedGood
{
private:
	string breadType;
public:
	Bread(string breadTypeIn);
	Bread();
	~Bread();

	string GetBreadType();
	string ToString();
	double GetDiscountPrice(int quantityIn);

	void SetPrice(double priceIn);
	void SetBreadType(string breadIn);


};
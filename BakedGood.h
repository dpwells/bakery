#pragma once
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <iomanip>

using namespace std;

class BakedGood
{
protected:
	double basePrice;
public:
	//BakedGoods(double basePriceIn);
	BakedGood();
	virtual ~BakedGood();
	virtual double GetDiscountPrice(int quantityIn) = 0;

	virtual string ToString();
	double GetPrice();
};

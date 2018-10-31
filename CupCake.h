#pragma once
#include "Cake.h"

using namespace std;

class CupCake : public Cake
{
private:
	string sprinkleColor;
	void CreamCheeseAddIn();
public:
	CupCake(string flavorIn, string frostingIn, string sprinkleColorIn);
	CupCake();
	~CupCake();

	string GetFlavor();
	string GetSprinkleColor();
	string ToString();
	double GetDiscountPrice(int quantityIn);

	void SetFlavor(string flavorIn);
	void SetSprinkleColor(string colorIn);

};

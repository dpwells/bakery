#pragma once
#include "Cake.h"

using namespace std;

class LayerCake : public Cake
{
private:
	int layerQuantity;
	void CreamCheeseAddIn();
public:
	LayerCake(string flavorIn, string frostingIn, int layerQuantityIn);
	LayerCake();
	~LayerCake();

	string GetFlavor();
	int GetLayerQuantity();
	string ToString();
	double GetDiscountPrice(int quantityIn);

	void SetFlavor(string flavorIn);
	void SetLayerQuantity(int layerQuantityIn);
};
#pragma once
#include "BakedGood.h"

using namespace std;

class Cake : public BakedGood
{
protected:

	string flavor;
	string frosting;
	virtual void CreamCheeseAddIn() = 0;
public:
	Cake();
	virtual ~Cake();
};
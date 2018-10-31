/*
David Wells
section 3
dpwells9@gmail.com

test case 1

testing the getdiscountprice().

input
Bread White 1
Bread Rye 2
Bread Pumpernickle 3
Bread Pumpkin 4
Bread Wheat 5
Bread Banana 27
Cupcake vanilla vanilla blue 1
Cupcake vanilla vanilla red 2
Cupcake vanilla vanilla purple 3
Cupcake vanilla vanilla yellow 4
Cupcake vanilla vanilla orenge 5
Cupcake vanilla vanilla green 27
Layer-cake vanilla vanilla 1 1
Layer-cake vanilla chocolate 1 2
Layer-cake vanilla lemon 1 3
Layer-cake vanilla strawberry 1 4
Layer-cake chocolate vanilla 1 5
Layer-cake redvelvet vanilla 1 27
done

expected output

Invoice:
Baked Good                                                                  Quantity     Total
White bread  ($4.50)                                                               1     4.50
Rye bread  ($4.50)                                                                 2     9.00
Pumpernickle bread  ($4.50)                                                        3     9.00
Pumpkin bread  ($4.50)                                                             4    13.50
Wheat bread  ($4.50)                                                               5    18.00
Banana bread  ($4.50)                                                             27    81.00
vanilla cupcake with vanilla frosting and blue sprinkles ($1.95)                   1     1.95
vanilla cupcake with vanilla frosting and red sprinkles ($1.95)                    2     3.30
vanilla cupcake with vanilla frosting and purple sprinkles ($1.95)                 3     4.95
vanilla cupcake with vanilla frosting and yellow sprinkles ($1.95)                 4     6.20
vanilla cupcake with vanilla frosting and orenge sprinkles ($1.95)                 5     7.75
vanilla cupcake with vanilla frosting and green sprinkles ($1.95)                 27    41.85
1-layer vanilla cake with vanilla frosting  ($9.00)                                1     9.00
1-layer vanilla cake with chocolate frosting  ($9.00)                              2    18.00
1-layer vanilla cake with lemon frosting  ($9.00)                                  3    21.00
1-layer vanilla cake with strawberry frosting  ($9.00)                             4    28.00
1-layer chocolate cake with vanilla frosting  ($9.00)                              5    35.00
1-layer redvelvet cake with vanilla frosting  ($9.00)                             27   189.00
Totals

actual output

Invoice:
Baked Good                                                                  Quantity     Total
White bread  ($4.50)                                                               1     4.50
Rye bread  ($4.50)                                                                 2     9.00
Pumpernickle bread  ($4.50)                                                        3     9.00
Pumpkin bread  ($4.50)                                                             4    13.50
Wheat bread  ($4.50)                                                               5    18.00
Banana bread  ($4.50)                                                             27    81.00
vanilla cupcake with vanilla frosting and blue sprinkles ($1.95)                   1     1.95
vanilla cupcake with vanilla frosting and red sprinkles ($1.95)                    2     3.30
vanilla cupcake with vanilla frosting and purple sprinkles ($1.95)                 3     4.95
vanilla cupcake with vanilla frosting and yellow sprinkles ($1.95)                 4     6.20
vanilla cupcake with vanilla frosting and orenge sprinkles ($1.95)                 5     7.75
vanilla cupcake with vanilla frosting and green sprinkles ($1.95)                 27    41.85
1-layer vanilla cake with vanilla frosting  ($-2526451347.00)                      1-2526451347.00
1-layer vanilla cake with chocolate frosting  ($-2526451347.00)                    2-5052902694.00
1-layer vanilla cake with lemon frosting  ($-2526451347.00)                        3-7579354047.00
1-layer vanilla cake with strawberry frosting  ($-2526451347.00)                   4-10105805396.00
1-layer chocolate cake with vanilla frosting  ($-2526451347.00)                    5-12632256745.00
1-layer redvelvet cake with vanilla frosting  ($-2526451347.00)                   27-68214186423.00
Totals

when testing the layercake discount price. i ran into a problem where it was returning very large neagative numbers
the issue i found was in the constructor. when the constructor was being called, i was using some math with 
the variables being set and it was using a variable that hadent been set yet so it was doing math with garbage.
i fixed the bug by reordering the the variables so that the necessary ones were being assigned first.

test case 2
testing wheather or not the items were being loaded into the  vector of baked goods
input :
Bread White 1
Bread Rye 2
Bread Pumpernickle 3
Cupcake vanilla vanilla blue 1
Cupcake vanilla vanilla red 2
Cupcake vanilla vanilla purple 3
Layer-cake vanilla vanilla 1 1
Layer-cake vanilla chocolate 1 2
Layer-cake vanilla lemon 1 3
done

expected output

Order Confirmations:
White bread  ($4.50)
Rye bread  ($4.50)
Rye bread  ($4.50)
Pumpernickle bread  ($4.50)
Pumpernickle bread  ($4.50)
Pumpernickle bread  ($4.50)
vanilla cupcake with vanilla frosting and blue sprinkles ($1.95)
vanilla cupcake with vanilla frosting and red sprinkles ($1.95)
vanilla cupcake with vanilla frosting and red sprinkles ($1.95)
vanilla cupcake with vanilla frosting and purple sprinkles ($1.95)
vanilla cupcake with vanilla frosting and purple sprinkles ($1.95)
vanilla cupcake with vanilla frosting and purple sprinkles ($1.95)
1-layer vanilla cake with vanilla frosting  ($9.00)
1-layer vanilla cake with chocolate frosting  ($9.00)
1-layer vanilla cake with chocolate frosting  ($9.00)
1-layer vanilla cake with lemon frosting  ($9.00)
1-layer vanilla cake with lemon frosting  ($9.00)
1-layer vanilla cake with lemon frosting  ($9.00)

actual output

the actual output matched the expected out put the items were being 
loaded into the vector properly, the test passed.


test case

testing wheather or not duplicate items were not being displayed

input

Bread White 1
Bread Rye 2
Bread Pumpernickle 3
Cupcake vanilla vanilla blue 1
Cupcake vanilla vanilla red 2
Cupcake vanilla vanilla purple 3
Layer-cake vanilla vanilla 1 1
Layer-cake vanilla chocolate 1 2
Layer-cake vanilla lemon 1 3
done

expected output

Invoice:
Baked Good                                                                  Quantity     Total
White bread  ($4.50)                                                               1     4.50
Rye bread  ($4.50)                                                                 2     9.00
Pumpernickle bread  ($4.50)                                                        3     9.00
vanilla cupcake with vanilla frosting and blue sprinkles ($1.95)                   1     1.95
vanilla cupcake with vanilla frosting and red sprinkles ($1.95)                    2     3.30
vanilla cupcake with vanilla frosting and purple sprinkles ($1.95)                 3     4.95
1-layer vanilla cake with vanilla frosting  ($9.00)                                1     9.00
1-layer vanilla cake with chocolate frosting  ($9.00)                              2    18.00
1-layer vanilla cake with lemon frosting  ($9.00)                                  3    21.00
Totals                                                                            18    80.70
Good Bye

actual output

the actual output matched the expected out put. The items were only being displayed once.

*/
#include "BakedGood.h"
#include "Bread.h"
#include "Cake.h"
#include "CupCake.h"
#include "LayerCake.h"

using namespace std;

void FreeMemory(vector <BakedGood*> & basket)
{
	for (unsigned int i = 0; i < basket.size(); i++)
	{
		delete basket.at(i);
	}
}

void FindBakedGood()
{

}

void AddBreadToBasket(vector <BakedGood*> & basket)
{
	int quantity = 0;
	string breadType = "";

	cin >> breadType;
	cin >> quantity;

	for (int i = 0; i < quantity; i++)
	{
		BakedGood* bakedGood = new Bread(breadType);
		basket.push_back(bakedGood);
	}
}

void AddCupcakeToBasket(vector <BakedGood*> & basket)
{
	int quantity = 0;
	string flavor = "";
	string frosting = "";
	string sprinkles = "";

	cin >> flavor;
	cin >> frosting;
	cin >> sprinkles;
	cin >> quantity;

	for (int i = 0; i < quantity; i++)
	{
		BakedGood* bakedGood = new CupCake(flavor, frosting, sprinkles);
		basket.push_back(bakedGood);
	}
}

void AddLayerCakeToBasket(vector <BakedGood*> & basket)
{
	int quantity = 0;
	string flavor = "";
	string frosting = "";
	int layerQuantity = 0;

	cin >> flavor;
	cin >> frosting;
	cin >> layerQuantity;
	cin >> quantity;
	for (int i = 0; i < quantity; i++)
	{
		BakedGood* bakedGood = new LayerCake(flavor, frosting, layerQuantity);
		basket.push_back(bakedGood);
	}
}

void OrderConfirmations(vector <BakedGood*> basket)
{
	cout << "Order Confirmations:" << endl;
	for (unsigned int i = 0; i < basket.size(); i++)
	{
		cout << basket.at(i)->ToString() << endl;
	}
	cout << endl;
}

string Invoice(vector <BakedGood*> basket)
{
	const int FIRST_COLUMN_W = 75;
	const int SECOND_COLUMN_W = 9;
	const int DECIMAL_PLACES = 2;

	string temp = "";
	ostringstream oss;
	int count = 0;
	double totalCost = 0.0;

	cout << "Invoice:" << endl;
	cout << "Baked Good" << setw(FIRST_COLUMN_W) << " Quantity " << setw(SECOND_COLUMN_W) << " Total" << endl;

	for (unsigned int i = 0; i < basket.size(); i++)
	{
		if (oss.str().find(basket.at(i)->ToString()) == temp.npos)
		{
			temp = basket.at(i)->ToString();
			count = 0;

			for (unsigned int i = 0; i < basket.size(); i++)
			{
				if (temp == basket.at(i)->ToString())
				{
					count++;
				}
			}
			oss << left << setw(FIRST_COLUMN_W) << basket.at(i)->ToString() << setw(SECOND_COLUMN_W) << right << count;
			oss << fixed << setprecision(DECIMAL_PLACES) << setw(SECOND_COLUMN_W) << basket.at(i)->GetDiscountPrice(count) << endl;

			totalCost += basket.at(i)->GetDiscountPrice(count);
		}
	}
	oss << setw(FIRST_COLUMN_W) << left << "Totals" << setw(SECOND_COLUMN_W) << right << basket.size();
	oss << setw(SECOND_COLUMN_W) << totalCost << endl << "Good Bye" << endl;
	return oss.str();
}

int main()
{
	bool quit = false;
	vector <BakedGood*> basket;
	string input = "";

	cout << "**Bread and Cakes Bakery**" << endl << endl;
	cout << "Enter sub-order (enter \"done\" to finish)" << endl;
	while (!quit)
	{
		cout << "Sub-order: " << endl;
		cin >> input;
	
		if (input == "Bread")
		{
			AddBreadToBasket(basket);
		}

		if (input == "Cupcake")
		{
			AddCupcakeToBasket(basket);
		}

		if (input == "Layer-cake")
		{
			
			AddLayerCakeToBasket(basket);
		}

		if (input == "done")
		{
			quit = true;
		}
	}
	OrderConfirmations(basket);
	cout << Invoice(basket);
	FreeMemory(basket);

	//system("pause");
	return 0;
}
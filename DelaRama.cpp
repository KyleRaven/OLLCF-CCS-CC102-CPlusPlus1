#include <iostream>

using namespace std;

int main () {
	string name;
	int SugarQty, RiceQty, SardinesQty, CoffeeQty, MilkQty;
	int sugarPriceUSD=2.03, RicePricePound=1.21, SardinesPricePound=2.53, CoffeePriceUSD =0.53, MilkPriceUSD=5.21;
	int UsdToPhp, PoundsToPhp;
	double usdollars;
	double Pounds;
	double PHP
	
	 cout << "Enter the quantity of Sugar: " << endl;
	 cin >> SugarQty;
	 cout << "Enter the quantity of Rice: " << endl;
	 cin >> RiceQty;
	 cout << "Enter the quantity of Sardines: " << endl;
	 cin >> SardinesQty;
	 cout << "Enter the quantity of Coffee: " << endl;
	 cin >> CoffeeQty;
	 cout << "Enter the quantity of Milk: " << endl;
	 cin >> MilkQty;
	
     double sugarCostPhp = SugarQty * SugarPriceUsd * UsdToPhp;
     double riceCostPhp = RiceQty * RicePricePound * PoundsToPhp;
     double sardinesCostPhp = SardinesQty * SardinesPricePound * PoundsToPhp;
     double coffeeCostPhp = CoffeeQty * CoffeePriceUsd * UsdToPhp;
     double milkCostPhp = MilkQty * MilkPriceUsd * UsdToPhp;
	 
	 cout << "Enter the amout conversion rate of Pounds to USD: " << endl;
	cin >> usdollars;
	
	Pounds = 1.00 * usdollars;
	
	cout << "US$" << usdollars 
     << " = GBP" << Pounds << endl;
	 
	 return 0;
}	

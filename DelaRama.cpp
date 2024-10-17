#include <iostream>
using namespace std;

int main() {
    float sugarPriceUSD, ricePricePound, sardinesPricePound, coffeePriceUSD, milkPriceUSD;
    int sugarQty, riceQty, sardinesQty, coffeeQty, milkQty;
    float usdToPhp, poundToPhp;
	
    cout << "Enter the prices of products:" << endl;
    cout << "Sugar Price (USD): "; 
	cin >> sugarPriceUSD;
    cout << "Rice Price (Pound): "; 
	cin >> ricePricePound;
    cout << "Sardines Price (Pound): "; 
	cin >> sardinesPricePound;
    cout << "Coffee Price (USD): "; 
	cin >> coffeePriceUSD;
    cout << "Milk Price (USD): "; 
	cin >> milkPriceUSD;

    cout << "\n Enter the quantity purchased for each product:" << endl;
    cout << "Sugar Quantity: "; 
	cin >> sugarQty;
    cout << "Rice Quantity: "; 
	cin >> riceQty;
    cout << "Sardines Quantity: "; 
	cin >> sardinesQty;
    cout << "Coffee Quantity: "; 
	cin >> coffeeQty;
    cout << "Milk Quantity: "; 
	cin >> milkQty;

    cout << "Enter conversion rates:" << endl;
    cout << "USD to PHP: "; 
	cin >> usdToPhp;
    cout << "Pound to PHP: "; 
	cin >> poundToPhp;

    float sugarCostPHP = sugarPriceUSD * usdToPhp * sugarQty;
    float riceCostPHP = ricePricePound * poundToPhp * riceQty;
    float sardinesCostPHP = sardinesPricePound * poundToPhp * sardinesQty;
    float coffeeCostPHP = coffeePriceUSD * usdToPhp * coffeeQty;
    float milkCostPHP = milkPriceUSD * usdToPhp * milkQty;
    float totalCostPHP = sugarCostPHP + riceCostPHP + sardinesCostPHP + coffeeCostPHP + milkCostPHP;

    cout << "\nPurchase Details:" << endl;
    cout << "Item\t\tQuantity\tPrice per Item (PHP)\tTotal Cost (PHP)" << endl;
    cout << "Sugar\t\t" << sugarQty << "\t\t" << sugarCostPHP / sugarQty << "\t\t\t" << sugarCostPHP << endl;
    cout << "Rice\t\t" << riceQty << "\t\t" << riceCostPHP / riceQty << "\t\t\t" << riceCostPHP << endl;
    cout << "Sardines\t" << sardinesQty << "\t\t" << sardinesCostPHP / sardinesQty << "\t\t\t" << sardinesCostPHP << endl;
    cout << "Coffee\t\t" << coffeeQty << "\t\t" << coffeeCostPHP / coffeeQty << "\t\t\t" << coffeeCostPHP << endl;
    cout << "Milk\t\t" << milkQty << "\t\t" << milkCostPHP / milkQty << "\t\t\t" << milkCostPHP << endl;

    cout << "Total Amount to be Paid (PHP): " << totalCostPHP << endl;

    return 0;
}

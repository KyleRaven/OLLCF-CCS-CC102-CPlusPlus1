#include <iostream>

using namespace std;

int main () {
	float temperature;

	cout << "Enter the current temperature ";
	cin >> temperature;
	if (temperature <32) {
		
		cout << "Bring a Heavy jacket." << endl; }
	else if (temperature >= 32 and temperature <=50) {
		cout << "Bring a light jacket." << endl; }
	else {
	cout << "No jacket needed." << endl; }
	return 0;
}
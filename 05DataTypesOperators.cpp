#include <iostream>
#include <cmath>
using namespace std;

int main () {
	double numx1, numx2, numy1, numy2;
	
	cout << "Enter the x-coordinate of the first point: "; 
	cin >> numx1;
	cout << "Enter the y-coordinate of the first point: ";
	cin >> numy1;
	cout << "Enter the x-coordinate of the second point: ";
	cin >> numx2;
	cout << "Enter the y-coordinate of the second point: ";
	cin >> numy2;
	
	double distance = sqrt(pow(numx2 - numx1, 2) + pow(numy2 - numy1, 2));
	
	cout << "The distance between the point is: " << distance << endl;
	
	return 0;
}
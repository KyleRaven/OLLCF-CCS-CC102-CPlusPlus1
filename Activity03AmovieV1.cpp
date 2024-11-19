#include <iostream>
using namespace std;

int main() {
    int age;
    double money;
    bool parent;
    string toPrintShow, toPrintMoney;
    cout << "Enter age: ";
    cin >> age;
    if (age < 13) {
        cout << "With Parent? "; cin >> parent;
        toPrintShow = parent ? "PG & G movie." : "G movie.";
    } else if (age < 16) {
        toPrintShow = "PG & G movie."; 
    } else {
        toPrintShow = "R, PG & G movie.";
    }
    cout << "Enter money: ";
    cin >> money;
    if (money < 7.5)
        toPrintMoney = "Not enough money.";
    else if (money < 10.5)
        toPrintMoney = "Can go to matinee movie.";
    else
        toPrintMoney = "Can go to evening & Matinee movie.";
    
    cout << toPrintShow << endl << toPrintMoney << endl;
    return 0;
}
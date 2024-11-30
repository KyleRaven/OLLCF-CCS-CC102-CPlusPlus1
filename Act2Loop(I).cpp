#include <iostream>
using namespace std;

int main() {
    int n = 5; 
    int m = 10; 

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n - i; j++) {
            cout << " "; 
        }
        for (int j = 1; j <= i; j++) {
            cout << "^"; 
        }
        cout << "*"; 
        cout << endl;
    }
    for (int i = 1; i <= 2; i++) { 
        for (int j = 1; j <= m; j++) {
            cout << "#"; 
        }
        for (int j = 1; j <= n; j++) {
            cout << "^"; 
        }
        cout << "*"; 
        cout << endl;
    }
    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= n - i; j++) {
            cout << " ";
        }
        for (int j = 1; j <= i; j++) {
            cout << "^"; 
        }
        cout << "*";
        cout << endl;
    }

    return 0;
}


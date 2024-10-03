#include <iostream>

using namespace std;

int main() {
   string name;
   string courseyear;
   string school; 

   cout << "Nickname: ";
   cin >> name;
   cout << "Course-Year Level: ";
   cin >> courseyear;
   cout << "School: ";
   cin >> school;
   cout << endl;

   cout << "Wow Congrats " << name << "! " << courseyear << " is a nice course. And you are studying in " 
        << school << " which is one of the Center of Excellence in Tertiary Education." << endl; 
   return 0;
}
	
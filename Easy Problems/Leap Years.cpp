#include <iostream>
using namespace std;

int main() {
   int year;
	cin >> year;
   if (year % 4 == 0) {
         if (year % 400 == 0)
            cout << "No" << endl;
         else
            cout << "Yes" << endl;
   } else
      cout << "No" << endl;
   return 0;
}

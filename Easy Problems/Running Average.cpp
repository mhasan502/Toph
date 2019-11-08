#include <iostream>
using namespace std;

int main() {

	int max,n,sum=0;
	cin >> max;
	for(int i=1; i<=max; i++){
		cin >> n;
		sum = sum+n;
		cout << (double)sum/i << endl;
	}
	return 0;
}

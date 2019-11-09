#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	bool b = true;
	
	for(int i=2; i<=(n/2); i++){
		if(n<=1){
			b = false;
			break;
		}
		if(n%i==0){
			b = false;
			break;
		}
	}
	if(b)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	
	return 0;
}

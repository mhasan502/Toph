#include <iostream>
using namespace std;

int main() {
	int p;
	cin >> p;
	int plus = p/10;
	int dot = 10 - plus;
	cout << "[";
	while(plus>0){
		cout << "+";
		plus--;
	}
	while(dot>0){
		cout << ".";
		dot--;
	}
	cout << "] " << p << "%" << endl;
	
	return 0;
}

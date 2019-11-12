#include <bits/stdc++.h>
using namespace std;

int main() {
	string st;
	cin >> st;
	string rv = st;
	reverse(rv.begin(),rv.end());
	if(st==rv)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;

	return 0;
}

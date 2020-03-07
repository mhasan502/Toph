#include <bits/stdc++.h>
using namespace std;

int main() {
	string a,b;
	cin >> a >> b;
	int a1=0,b1=0;
	char var;
	for(int i=0; a[i]!='\0'; i++){
		var = toupper(a[i]);
		a1+=(var-'A');
	}
	for(int i=0; b[i]!='\0'; i++){
		var = toupper(b[i]);
		b1+=(var-'A');
	}
	if(a1==b1)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	
	return 0;
}

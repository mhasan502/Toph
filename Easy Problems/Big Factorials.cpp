#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,v=3;
    int arr[4];
	unsigned long long int res=1;
	cin >> n;
	for(int i=1; i<=n; i++){
        res = (res*i)%10000;
	}
	cout << res << endl;

	return 0;
}

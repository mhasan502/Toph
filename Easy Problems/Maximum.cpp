#include<iostream>
#include<algorithm>
using namespace std;

int main() {
	int num;
	cin >> num;
	int arr[num];
	for(int i = 0; i < num; i++){
		cin >> arr[i];
	}
	int *m = max_element(arr,arr+num);
	cout << *m << endl;
	return 0;
}

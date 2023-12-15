#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int* arr1 = new int[n];
	int* arr2 = new int[n];
	int* itogarr = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> arr1[i];
	}
	for (int i = 0; i < n; i++) {
		cin >> arr2[i];
	}
	for (int i = 0; i < n; i++) {
		itogarr[i] = arr1[i] + arr2[n-i-1];
		cout << itogarr[i] << " ";
	}
	return 0;
}
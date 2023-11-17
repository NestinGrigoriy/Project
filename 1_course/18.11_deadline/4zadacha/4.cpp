#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int* arr = new int[n];
	int k1, k2, k3;
	for (int i = 0; i < n; i++) {
		arr[i] = 0;
	}
	for (int i = 0; i < n+1; i++){
		cin >> k1 >> k2 >> k3;
		for (int j = k1 - 1; j <= k2 - 1; j++) {
			arr[j] += k3;
		}
	}
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}
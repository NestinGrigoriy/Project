#include <iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	int* arr = new int[a];
	for (int i = 0; i < a; i++) {
		cin >> arr[i];
	}
	int mn = min(arr[0], arr[1]);
	for (int i = 0; i < a; i++) {
		mn = min(arr[i], mn);
	}
	cout << mn;
	return 0;
}
		
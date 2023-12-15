#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int* array = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> array[i];
	}
	int counter = 0;
	for (int i = 0; i < n; i++) {
		if (array[i] != array[n-1]) {
			counter++;
		}
	}
	cout << counter;
	delete array;
	return 0;
}
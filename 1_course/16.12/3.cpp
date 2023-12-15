#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int* array = new int[n];
	int* reversedArray = new int[n];
	for (int i = 0; i < n; i++) {
		cin >> array[i];
	}
	for (int i = 0; i <n; i++) {
		reversedArray[i] = array[n-i-1];
		cout << reversedArray[i] << " ";
	}
	delete array;
	delete reversedArray;
	return 0;
}
#include <iostream>
using namespace std;
int main() {
	int arr[10];
	int mn;
	for (auto& c : arr) {
		c = rand() % 101 - 50;
		mn = c;
		cout << c << " ";
	}
	cout << endl;
	for (auto& c : arr) {
		if (c < mn) {
			mn = c;
		}
	}
	cout << mn;
}
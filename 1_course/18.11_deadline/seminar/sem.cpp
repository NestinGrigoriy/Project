#include <iostream>
#include <string>
#include <math.h>
using namespace std;
int main() {
	int razmer;
	cin >> razmer;
	int* arr = new int[razmer];
	int maxx = 0;
	int minn = pow(10, 9);
	for (int i = 0; i < razmer; i++) {
		cin >> arr[i];
		maxx = max(maxx, arr[i]);
		minn = min(minn, arr[i]);
	}
	string mx = "0";
	for (int i = minn; i <= maxx; i++) {
		int count = 0;
		for (int j = 0; j < razmer; j++) {
			if (arr[j] == i) {
				count++;
			}
		}
		string str = to_string(count) +" " + to_string(i);
		mx = max(mx, str);
	}
	string itog = "";
	for (int i = 0; i < size(mx); i++) {
		if (mx[i] == ' ') {
			for (int j = i + 1; j < size(mx); j++) {
				itog += mx [j];
			}
			break;
		}
	}
	cout << itog;
	return 0;
}
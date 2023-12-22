#include <vector>
#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	vector <double> arr(n);
	vector <double> itogarr;
	double counter = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		counter += arr[i];
	}
	double sr = counter / n;
	for (int i = 0; i < n; i++) {
		if (arr[i] != sr) {
			itogarr.push_back(arr[i]);
		}
	}
	for (int i = 0; i < itogarr.size(); i++) {
		cout << itogarr[i] << " ";
	}
	return 0;
}
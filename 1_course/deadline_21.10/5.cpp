// 5 zadacha
#include <iostream>
using namespace std;
int main() {
	double x, y;
	cin >> x >> y;
	if (x > 0 and y > 0) {
		cout << "I Quarter";
	}
	if (x > 0 and y < 0) {
		cout << "IV Quarter";
	}
	if (x < 0 and y>0) {
		cout << "II Quarter";
	}
	if (x < 0 and y < 0) {
		cout << "III Quarter";
	}
}
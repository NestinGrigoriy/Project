// 6 zadacha
#include <iostream>
using namespace std;
int main() {
	int a,a1,a2,a3;
	cin >> a;
	a1 = a % 10;
	a2 = (a % 100) / 10;
	a3 = (a % 1000) / 100;
	if (a1 == a2 or a1 == a3 or a2 == a3) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}
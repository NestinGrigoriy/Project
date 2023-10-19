// 7 zadacha
#include <iostream>
using namespace std;
int main() {
	int a, pervie2, posl, predposl;
	cin >> a;
	pervie2 = a / 1000;
	posl = a % 10;
	predposl = (a %100)/10;
	if (pervie2 == posl*10 + predposl) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}
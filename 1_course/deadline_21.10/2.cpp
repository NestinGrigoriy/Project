// 2 zadacha
#include <iostream>
using namespace std;
int countyear(int year) {
	if (year % 400 == 0 or (year % 4 == 0 and year % 100 != 0)){
		return 1;
	}
	else {
		return 0;
	}
}
int main() {
	int a, b;
	cin >> a >> b;
	int bliza = 0, blizb = 0;
	if (countyear(a)) {
		bliza = a;
	}
	else if (countyear(a + 1)) {
		bliza = a + 1;
	}
	else if (countyear(a + 2)) {
		bliza = a + 2;
	}
	else if (countyear(a + 3)) {
		bliza = a + 3;
	}
	else {
		bliza = a + 4;
	}
	if (countyear(b)) {
		blizb = b;
	}
	else if (countyear(b - 1)) {
		blizb = b - 1;
	}
	else if (countyear(b - 2)) {
		blizb = b - 2;
	}
	else if (countyear(b - 3)) {
		blizb = b - 3;
	}
	else {
		blizb = b - 4;
	}
	if (bliza > blizb) {
		cout << 0;
	}
	else {
		cout << ((blizb - bliza) / 4) + 1 - (blizb - bliza) / 100 +(blizb-bliza)/400;
	}
	return 0;
}
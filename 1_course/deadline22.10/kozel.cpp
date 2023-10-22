#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
using namespace std;
int main() {
	double storona, verevka,segment, ygol,s;
	cin >> storona >> verevka;
	storona = storona / 2;
	if (storona >= verevka) {
		s = pow(verevka, 2) * M_PI;
	}
	if (storona * sqrt(2) <= verevka) {
		s = pow(storona * 2, 2);
	} if (storona < verevka and verevka < storona * sqrt(2)) {
		ygol = 2*(acos(storona / verevka));
		segment = (ygol - sin(ygol)) * (pow(verevka, 2) / 2);
		s = pow(verevka, 2) * M_PI - (4 * segment);
	}
	cout << fixed << s;
	return 0;

}
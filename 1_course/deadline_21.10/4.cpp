// 4 zadacha
#include <iostream>
#include <math.h>
using namespace std;
int main() {
	double n, x, y;
	cin >> n >> x >> y;
	x = (round(x * 10))/10;
	y = (round(y * 10)) / 10;
	double count;
	double fullx;
	fullx = n * x;
	count = (fullx-y*n)/(y-1);
	cout << ceil(count);
	return 0;
}
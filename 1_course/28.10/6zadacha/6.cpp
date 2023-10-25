#include <iostream>
#include <math.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int mx = 0;
	while (n > 0) {
		int n1 = n % 10;
		if (mx <= n1) {
			mx = n1;
		}
		n = n / 10;
	}
	cout << mx;
	return 0;
}
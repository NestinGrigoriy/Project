#include <Iostream>
#include <math.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	int count = 0;
	while (n > 0) {
		int n1 = n % 10;
		if (n1 % 2 == 0) {
			count += 1;
		}
		n = n / 10;
	}
	cout << count;
	return 0;
}
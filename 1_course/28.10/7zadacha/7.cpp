#include <iostream>
using namespace std;
int main() {
	for (int i = 1000; i <= 9999; i++) {
		int n1 = i % 10, n2 = (i / 10) % 10, n3 = (i / 100) % 10, n4 = i / 1000;
		if (n1 + n2 + n3 + n4 == 15) {
			cout << i << " ";
		}
	}
	return 0;
}
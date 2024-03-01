#include <iostream>
using namespace std;
int main() {
	int b = 0;
	for (int i = 1; i <= 100; i++) {
		b += pow(i, 2);
	}
	cout << b;
	return 0;
}
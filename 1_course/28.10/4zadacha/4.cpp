#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int n1, n2, n3;
	n1 = n % 10, n2 = (n / 10) % 10, n3 = n / 100;
	cout << n1 * n2 * n3;
	return 0;
}
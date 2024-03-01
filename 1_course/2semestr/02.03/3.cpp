#include <iostream>
using namespace std;
int main() {
	long long a;
	cin >> a;
	cout << "KB = " << a / pow(2, 10) << endl << "MB = " << a / pow(2, 20);
	cout << endl << "GB = " << a / pow(2, 30);
	return 0;
}
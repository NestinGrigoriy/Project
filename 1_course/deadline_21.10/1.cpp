// 1 zadacha
#include <iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	cout << "Max:" << max(a % 10, a / 10) << endl << "Min:" << min(a % 10, a / 10);
	return 0;
}

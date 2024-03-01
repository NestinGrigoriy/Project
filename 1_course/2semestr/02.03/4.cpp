#include <iostream>
#include <string>
using namespace std;
int main() {
	cout << "Input number";
	string a;
	cin >> a;
	int result = 0;
	char b = a[0];
	for (int i = 0; i < a.length(); i++) {
		result += a[i] - '0';
	}
	cout << result;
}
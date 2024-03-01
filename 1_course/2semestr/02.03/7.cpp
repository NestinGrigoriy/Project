#include <iostream>
#include <string>
using namespace std;
int main() {
	string a, b;
	cout << "Input string's" << endl;
	cin >> a >> b;
	if (a[a.length()-1] == b[0]) {
		cout << "True";
	}
	else {
		cout << "False";
	}
}
#include <iostream>
using namespace std;
int main() {
	double x, y, z, a, b;
	cin >> x >> y >> z >> a >> b;
	if ((x <= a and y <= b) or (x <= b and y <= a) or (x <= a and z <= b) or (x <= b and z <= a) or (y <= a and z <= b) or (y <= b and z <= a)) {
		cout << "YES";
	}
	else {
		cout << "NO";
	}
	return 0;
}
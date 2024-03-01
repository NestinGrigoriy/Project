#include <iostream>
#include <string>
using namespace std;
int main() {
	char c1, c2, c3, c4, c5;
	cout << "Input char's" << endl;
	cin >> c1 >> c2 >> c3 >> c4 >> c5;
	int a = (c1-'0')*10000+(c2-'0')*1000+(c3-'0')*100+(c4-'0')*10+c5-'0';
	cout << a;
	return 0;
}
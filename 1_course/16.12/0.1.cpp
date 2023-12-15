#include <iostream>
using namespace std;
int main() {
	int array[5][5];
	int c = 1;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			array[i][j] = c;
			c++;
		}
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			cout << array[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int n, m;
	cin >> n >> m;
	cout << "¬ведите размер двумерного массива" << endl;
	int **array = new int* [n];
	for (int i = 0; i < n; i++) {
		array[i] = new int [m];
	}
	int mx = 0,itog;
	for (int i = 0; i < n; i++) {
		int counter = 0;
		for (int j = 0; j < m; j++) {
			array[i][j] = 10 + rand() % 90;
			cout << array[i][j] << " ";
			counter += array[i][j];
		}
		cout << endl;
		if (counter > mx) {
			mx = counter;
			itog = i;
		}
	}
	cout << itog+1;
	return 0;
}
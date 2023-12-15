#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	int n, m;
	cout << "¬ведите размер двумерного массива" << endl;
	cin >> n >> m;
	int **array = new int* [n];
	for (int i = 0; i < n; i++) {
		array[i] = new int [m];
	}
	cout << "¬ведите элементы массива" << endl;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> array[i][j];
		}
	}
	for (int i = 0; i < n; i++) {
		int counter = 0;
		for (int j = 0; j < m; j++) {
			cout << array[i][j] << " ";
			counter += array[i][j];
		}
		cout << "—умма строки: " << counter << endl;
	}
	cout << "—уммы столбцов: ";
	for (int i = 0; i < m; i++) {
		int counter = 0;
		for (int j = 0; j < n; j++) {
			counter += array[j][i];
		}
		cout << counter << " ";
	}
	return 0;
}
#include <iostream>
#include <string>
using namespace std;
int main() {
	setlocale(LC_ALL, "RU");
	string string;
	cin >> string;
	if (string.length() > 50) {
		cout << "����� ������ ��������� 50 ��������";
	}
	int mx = 0;
	char simvol;
	for (auto s : "0123456789") {
		int counter = 0;
		for (const auto& c : string) {
			if (s == c) {
				counter++;
			}
		}
		if (counter > mx) {
			simvol = s;
			mx = counter;
		}
	}
	if (mx > 0) {
		cout << simvol;
	}
	else {
		cout << "������ ������ �� ����� ����";
	}
	return 0;
}
#include <iostream>
#include <string>
using namespace std;

char create(string s1, string s2, string s3, string s4,char s[4][4]) {
	for (int i = 0; i < 4; i++) {
		s[0][i] = s1[i];
	}
	for (int i = 0; i < 4; i++) {
		s[1][i] = s2[i];
	}
	for (int i = 0; i < 4; i++) {
		s[2][i] = s3[i];
	}
	for (int i = 0; i < 4; i++) {
		s[3][i] = s4[i];
	}
	return s[4][4];
}

int check(int j, int k, char s[4][4], string str,int h) {
	cout << j << " " << k << " " << h << endl;
	if (str.length() == h) {
		return 1;
	}
	if (j<3 and s[j + 1][k] == str[h + 1]){
		s[j][k] = '0';
		return check(j + 1, k, s, str, h + 1);
		}
	else if (j>0 and s[j-1][k] == str[h + 1]) {
		s[j][k] = '0';
		return check(j-1, k, s, str, h + 1);
	}
	else if (k<3 and s[j][k+1] == str[h + 1]) {
		s[j][k] = '0';
		return check(j, k+1, s, str, h + 1);
	}
	else if (k>0 and s[j][k-1] == str[h + 1]) {
		s[j][k] = '0';
		return check(j, k-1, s, str, h + 1);
	}
	return 0;
}

int main() {
	string s1, s2, s3, s4;
	cin >> s1 >> s2 >> s3 >> s4;
	char s[4][4];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		string str;
		cin >> str;
		int flag = 0;
		create(s1, s2, s3, s4, s);
		for (int q = 0; q < 4; q++) {
			for (int w = 0; w < 4; w++) {
				cout << s[q][w] << " ";
			}
			cout << endl;
		}
			for (int j = 0; j < 4; j++) {
				if (flag == 1) {
					break;
				}
				for (int k = 0; k < 4; j++) {
					if (s[j][k] == str[0]) {
						if (check(j, k, s, str, 0)) {
							cout << str << ": YES" << endl;
							flag = 1;
							break;
						}
						else {
							create(s1, s2, s3, s4, s);
							continue;
						}
					}
				}
			}
		if (flag == 0) {
			cout << str << ": NO" << endl;
		}
	}
	return 0;
}
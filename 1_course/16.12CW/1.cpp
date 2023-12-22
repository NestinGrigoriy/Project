#include <iostream>
using namespace std;
int main() {
 int n;
 cin >> n;
 int* arr = new int[n];
 for (int i = 0; i < n; i++) {
  arr[i] = rand();
  cout << arr[i] << " ";
 }
 return 0;
}
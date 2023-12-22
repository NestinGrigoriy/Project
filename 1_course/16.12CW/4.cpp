#include <iostream>
using namespace std;
int main() {
 int n;
 cin >> n;
 int* arr = new int[n];
 int counter = 0;
 for (int i = 0; i < n; i++) {
  arr[i] = i * i;
  cout << arr[i] << " ";
  counter += arr[i];
 }
 cout << endl << counter;
 return 0;
}
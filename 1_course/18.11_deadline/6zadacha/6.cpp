#include <iostream>
using namespace std;
int main() {
    long long r;
    cin >> r;
    long long count = 0;
    for (long long x = 0; x < r; x++) {
        count += ceil(sqrt(r * r - x * x));
    }
    cout << count * 4;
    return 0;
}
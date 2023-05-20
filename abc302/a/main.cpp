#include <bits/stdc++.h>
using namespace std;
int main() {
    long double A, B; cin >> A >> B;
    long double x = A / B; long y = x;
    cout << y + (y < x) << endl;
    return 0;
}

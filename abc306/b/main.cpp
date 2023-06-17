#include <bits/stdc++.h>
using namespace std;
int main() {
    unsigned long n = 0;
    for (int i = 0; i < 64; i++) {
        unsigned long a; cin >> a;
        n |= a << i;
    }
    cout << n << endl;
    return 0;
}

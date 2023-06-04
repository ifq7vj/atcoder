#include <bits/stdc++.h>
using namespace std;
int func(int n) {
    return n > 999? func(n / 10) * 10: n;
}
int main() {
    int N; cin >> N;
    cout << func(N) << endl;
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main() {
    int N; cin >> N;
    int n;
    for (n = 0; N > 999; n++) N /= 10;
    for (int i = 0; i < n; i++) N *= 10;
    cout << N << endl;
    return 0;
}

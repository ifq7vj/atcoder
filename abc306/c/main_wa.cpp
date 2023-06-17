#include <bits/stdc++.h>
using namespace std;
int main() {
    int N; cin >> N;
    vector<int> A(N * 3); for (int i = 0; i < N * 3; i++) cin >> A[i];
    vector<int> b(N);
    for (int i = 0, n = 0; i < N * 3; i++) {
        if (b[A[i] - 1] == -1) b[A[i] - 1] = ++n;
        if (b[A[i] - 1] == 0) b[A[i] - 1] = -1;
    }
    for (int i = 0; i < N; i++) {
        cout << b[i] << (i < N - 1 ? " " : "\n");
    }
    return 0;
}

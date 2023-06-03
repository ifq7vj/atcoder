#include <bits/stdc++.h>
using namespace std;
int main() {
    int N; cin >> N;
    vector<string> S(N); vector<int> A(N); for (int i = 0; i < N; i++) cin >> S[i] >> A[i];
    int n, m = 0; for (int i = 0; i < N; i++) if (A[i] > m) n = i, m = A[i];
    for (int i = 0; i < N; i++) cout << S[(N + n + i - 1) % N] << endl;
    return 0;
}

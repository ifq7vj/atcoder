#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, T; cin >> N >> T;
    vector<int> C(N); for (int i = 0; i < N; i++) cin >> C[i];
    vector<int> R(N); for (int i = 0; i < N; i++) cin >> R[i];
    int n = 0; for (int i = 0, r = 0; i < N; i++) if (C[i] == T && r < R[i]) r = R[i], n = i;
    if (n == 0) for (int i = 0, r = 0; i < N; i++) if (C[i] == C[0] && r < R[i]) r = R[i], n = i;
    cout << n + 1;
    return 0;
}

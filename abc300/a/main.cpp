#include <bits/stdc++.h>
using namespace std;
int main() {
    int N; cin >> N;
    int A, B; cin >> A >> B;
    vector<int> C(N); for (int i = 0; i < N; i++) cin >> C[i];
    for (int i = 0; i < N; i++) if (C[i] == A + B) cout << i + 1 << endl;
    return 0;
}

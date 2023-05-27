#include <bits/stdc++.h>
using namespace std;
int main() {
    int T; cin >> T;
    for (int i = 0; i < T; i++) {
        int N; cin >> N;
        string S; cin >> S;
        for (int j = 0; j < N - 1; j++) {
            string t;
            for (int k = 0; k < N - j - 1; k++) {
                if (S[k] == 'A') {
                    t += S[k + 1];
                }
            }
            for (int k = 0; k < N - j - 1; k++) {
                if (S[k] == 'B') {
                    t += S[k + 1];
                }
            }
            S = t;
        }
        cout << S << endl;
    }
    return 0;
}

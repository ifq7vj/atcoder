#include <bits/stdc++.h>
using namespace std;
int main() {
    int N; cin >> N;
    string S, T; cin >> S >> T;
    bool f = true;
    for (int i = 0; i < N; i++) {
        if (S[i] == T[i]) continue;
        if (S[i] == '1' && T[i] == 'l') continue;
        if (S[i] == 'l' && T[i] == '1') continue;
        if (S[i] == '0' && T[i] == 'o') continue;
        if (S[i] == 'o' && T[i] == '0') continue;
        f = false;
    }
    cout << (f? "Yes": "No") << endl;
    return 0;
}

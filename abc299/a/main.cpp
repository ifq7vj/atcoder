#include <bits/stdc++.h>
using namespace std;
int main() {
    int N; cin >> N;
    string S; cin >> S;
    for (int i = 0, t = 0; i < N; i++) {
        t += S[i] == '|';
        if (t == 1 && S[i] == '*'){
            cout << "in" << endl;
            return 0;
        }
    }
    cout << "out" << endl;
    return 0;
}

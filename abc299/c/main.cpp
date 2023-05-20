#include <bits/stdc++.h>
using namespace std;
int main() {
    int N; cin >> N;
    string S; cin >> S;
    int X = 0; for (int i = 0, x = 0; i < N; i++) S[i] == 'o'? x++: x = 0, X < x? X = x: 0;
    cout << (X < N && X > 0? X: -1);
    return 0;
}

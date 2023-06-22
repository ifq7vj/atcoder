#include <bits/stdc++.h>
using namespace std;
int main() {
    int N; cin >> N;
    vector<vector<char>> A(N, vector<char>(N)); for (int i = 0; i < N; i++) for (int j = 0; j < N; j++) cin >> A[i][j];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < i; j++) {
            if (A[i][j] == 'W' && A[j][i] != 'L') { cout << "incorrect" << endl; return 0; }
            if (A[i][j] == 'D' && A[j][i] != 'D') { cout << "incorrect" << endl; return 0; }
            if (A[i][j] == 'L' && A[j][i] != 'W') { cout << "incorrect" << endl; return 0; }
        }
    }
    cout << "correct" << endl;
    return 0;
}

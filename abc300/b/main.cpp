#include <bits/stdc++.h>
using namespace std;
int main() {
    int H, W; cin >> H >> W;
    vector<vector<char>> A(H, vector<char>(W)); for (int i = 0; i < H; i++) for (int j = 0; j < W; j++) cin >> A[i][j];
    vector<vector<char>> B(H, vector<char>(W)); for (int i = 0; i < H; i++) for (int j = 0; j < W; j++) cin >> B[i][j];
    bool f1 = false; for (int i = 0; i < H; i++) for (int j = 0; j < W; j++)
        { bool f2 = true; for (int k = 0; k < H; k++) for (int l = 0; l < W; l++) if (A[(i + k) % H][(j + l) % W] != B[k][l]) f2 = false; if (f2) f1 = true; }
    cout << (f1? "Yes": "No") << endl;
    return 0;
}

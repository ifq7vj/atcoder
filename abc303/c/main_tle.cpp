#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, M, H, K; cin >> N >> M >> H >> K;
    string S; cin >> S;
    vector<vector<int>> xy(M, vector<int>(2)); for (int i = 0; i < M; i++) cin >> xy[i][0] >> xy[i][1];
    int x = 0, y = 0;
    for (int i = 0; i < N; i++) {
        S[i] == 'R'? x++: 0;
        S[i] == 'L'? x--: 0;
        S[i] == 'U'? y++: 0;
        S[i] == 'D'? y--: 0;
        if (--H < 0) {
            cout << "No" << endl;
            return 0;
        }
        vector<vector<int>>::iterator t = find(xy.begin(), xy.end(), vector<int>{x, y});
        if (t != xy.end() && H < K) {
            H = K;
            xy.erase(t);
        }
    }
    cout << "Yes" << endl;
    return 0;
}

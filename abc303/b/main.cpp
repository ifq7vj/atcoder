#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, M; cin >> N >> M;
    vector<vector<int>> a(M, vector<int>(N)); for (int i = 0; i < M; i++) for (int j = 0; j < N; j++) cin >> a[i][j];
    vector<vector<int>> c(0, vector<int>(2));
    for (int i = 0; i < M; i++) {
        for (int j = 0; j < N - 1; j++) {
            if (find(c.begin(), c.end(), vector<int>{a[i][j], a[i][j + 1]}) == c.end() && find(c.begin(), c.end(), vector<int>{a[i][j + 1], a[i][j]}) == c.end()) {
                c.push_back({a[i][j], a[i][j + 1]});
            }
        }
    }
    cout << N * (N - 1) / 2 - c.size() << endl;
    return 0;
}

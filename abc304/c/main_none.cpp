#include <bits/stdc++.h>
using namespace std;
int main() {
    int N, D; cin >> N >> D;
    vector<int> X(N), Y(N); for (int i = 0; i < N; i++) cin >> X[i] >> Y[i];
    for (int i = 0; i < N; i++) {
        bool f = false;
        for (int j = 0; j < N; j++) {
            if (i != j && abs(X[i] - X[j]) <= D && abs(Y[i] - Y[j]) <= D && hypot(X[i] - Y[i], X[j] - Y[j]) <= D) {
                f = true;
                break;
            }
        }
        cout << (f? "Yes": "No") << endl;
    }
    return 0;
}

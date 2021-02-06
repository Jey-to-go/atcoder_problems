#include<bits/stdc++.h>
using namespace std;
#define rep(i, c) for(int i = 0; i < (int)c; i++)

int main() {
    int N, S, D;
    cin >> N >> S >> D;
    vector<int> X(N);
    vector<int> Y(N);
    int swi = 0;

    rep(i, N) {
        cin >> X[i] >> Y[i];
        if (X[i] < S && Y[i] > D) {
            cout << "Yes" << endl;
            swi++;
            break;
        }
    }

    if (swi==0) cout << "No" << endl;

    return 0;
}

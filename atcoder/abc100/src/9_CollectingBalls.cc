#include<bits/stdc++.h>
using namespace std;
#define rep(i, c) for(int i = 0; i < (int)c; i++)

int main() {
    int N, K;
    cin >> N >> K;

    int x[N];
    rep(i, N) cin >> x[i];

    int des = 0;
    int sum = 0;

    rep(i, N) {
        int AD = abs(x[i]);
        int BD = abs(x[i] - K);

        if (AD < BD) {
            des = AD;
        } else {
            des = BD;
        }

        sum += des * 2;
    }

    cout << sum << endl;

    return 0;
}

int abs(int n) {
    if (n < 0) {
        n = -1 * n;
    }

    return n;
}

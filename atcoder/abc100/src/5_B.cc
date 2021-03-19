#include<bits/stdc++.h>
using namespace std;
#define rep(i, c) for(int i = 0; i < (int)c; i++)

// 一般に、正整数x,yに対し、x/yを切り上げた値は(x+y−1)/y(ここで/は整数除算を表す)として実装することができる
// この場合だと、H*W, 2に対してだから切り上げた値は、(H*W + 2 - 1)/2
// つまり、(x + y - 1)/y


int main() {
    int N, M, C;
    cin >> N >> M >> C;

    int B[M];
    rep(i, M) cin >> B[i];

    int A[N][M];
    int sum = 0;
    int ans = 0;

    rep(i, N) {
        rep(j, M) cin >> A[i][j];
    }


    for(int i = 0; i < N; i++) {
        sum = 0;

        for(int j = 0; j < M; j++) {
            sum += A[i][j] * B[j];
        }
        sum += C;

        if (sum > 0) ans++;
    }

    cout << ans << endl;

    return 0;
}

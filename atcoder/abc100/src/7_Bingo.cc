#include<bits/stdc++.h>
using namespace std;
#define rep(i, c) for(int i = 0; i < (int)c; i++)

int main() {
    int A[3][3];
    int N;

    rep(i, 3) rep(j, 3) cin >> A[i][j];

    cin >> N;
    int b[N];

    rep(i, N) cin >> b[i];

    bool ok[3][3];

    rep(i, 3) rep(j, 3) ok[i][j] = false;
    // rep(i, 3) rep(j, 3) cout << ok[i][j] << endl;


    rep(i, N) {
        rep(j, 3) {
            rep(k, 3) {
                if (b[i] == A[j][k]) {
                    // cout << A[j][k] << " = " << b[i] << endl;
                    ok[j][k] = true;
                }
            }
        }
    }

    // rep(i, 3) rep(j, 3) cout << ok[i][j] << endl;

    int x = 0;
    bool bingo = false;

    // ‰¡
    rep(i, 3) {
        rep(j, 3) {
            if (ok[i][j]) {
                // cout << "‰¡F" << A[i][j] << endl;
                x++;
            }
        }

        if (x == 3) bingo = true;
        x = 0;
    }

    // c
    rep(i, 3) {
        rep(j, 3) {
            if (ok[j][i]) {
                // cout << "cF" << A[j][i] << endl;
                x++;
            }
        }

        if (x == 3) bingo = true;
        x = 0;
    }

    // ŽÎ‚ß
    if ((ok[0][0] && ok[1][1] && ok[2][2]) || (ok[0][2] && ok[1][1] && ok[2][0])) bingo = true;

    if (bingo) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}

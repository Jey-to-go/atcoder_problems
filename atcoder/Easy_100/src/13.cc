#include<bits/stdc++.h>
#include<vector>
using namespace std;
#define rep(i, c) for(int i = 0; i < (int)c; i++)

// Cookie Exchanges

int main(){
    int x[3];
    rep(i, 3) cin >> x[i];
    // cin >> a >> b >> c;
    // rep(i, 3) cout << x[i] << endl;

    int y[3];
    int ans = 0;
    bool s = false;

    rep(k, 100000000){
        rep(i, 3) {
            if (x[i] % 2 == 0) {
                y[i] = x[i] / 2;
                x[i] = 0;
                // cout << "test" << endl;
            } else {
                s = true;
            }
        }

        if (s) break;

        rep(i, 3) {
            rep(j, 3) {
                if (i != j) x[i] += y[j];
            }
            // cout << x[i] << endl;
        }

        ans++;
    }

    if (!s) ans = -1;

    cout << ans << endl;

    return 0;
}

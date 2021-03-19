#include<bits/stdc++.h>
using namespace std;
#define rep(i, c) for(int i = 0; i < (int)c; i++)

int main(){
    int A, B, M;
    cin >> A >> B >> M;

    vector<int> a(A);
    vector<int> b(B);
    vector<vector<int>> vv(M, vector<int>(3));

    rep(i, A) cin >> a[i];
    rep(i, B) cin >> b[i];
    rep(i, M) {
        rep(j, 3) cin >> vv[i][j];
    }

    int min_a = 100000;
    rep(i, A) min_a = min(min_a, a[i]);

    int min_b = 100000;
    rep(i, B) min_b = min(min_b, b[i]);

    int min_value = 100000;
    rep(i, M) {
        int x = vv[i][0]-1;
        int y = vv[i][1]-1;

        min_value = (min_value, a[x] + b[y] - vv[i][2]);
    }


    int ans = min(min_value, min_a + min_b);
    cout << ans << endl;

    return 0;
}

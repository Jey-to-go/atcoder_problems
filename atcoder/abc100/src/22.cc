#include<bits/stdc++.h>
using namespace std;
#define rep(i, c) for(int i = 0; i < (int)c; i++)

int main(){
    int x, N;
    cin >> N >> x;

    vector<int> a(N);
    rep(i, N) cin >> a[i];

    sort(a.begin(), a.end());
    int ans = 0;

    rep(i, N) {
        x = x - a[i];
        if (x < 0) break; // 最後の奴が欲しい数よりも少なく貰う

        ans++;
    }

    if (x > 0) ans--; // 最後のやつがツケを払わせられる

    cout << ans << endl;

    return 0;
}

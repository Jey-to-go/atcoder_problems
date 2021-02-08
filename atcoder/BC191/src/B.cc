#include<bits/stdc++.h>
using namespace std;
#define rep(i, c) for(int i = 0; i < (int)c; i++)

int main(){
    int n, x;
    cin >> n >> x;

    int a[n];
    rep(i, n) cin >> a[i];

    int c = 0;
    rep(i, n) {
        if (a[i] != x) cout << a[i] << " " << flush;
        ++c;
    }

    if (c == 0) cout << "" << flush;

    return 0;
}

ve

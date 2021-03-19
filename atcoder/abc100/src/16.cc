#include<bits/stdc++.h>
#include <math.h>
using namespace std;
#define rep(i, c) for(int i = 0; i < (int)c; i++)


int main(){
    int N;
    cin >> N;
    int idx;

    vector<int> v(N);
    vector<int> a_order(N);

    rep(i, N) cin >> v[i];

    // 力任せ的に並び変えたる
    rep(p, N) {
        int min = 1000000;

        rep(i, v.size()) {
            if (v[i] < min) {
                idx = i;
                min = v[i];
            }
        }

        a_order[p] = idx+1;
        v[idx] = 1000000;
    }

    rep(i, N) cout << a_order[i] << " ";

    return 0;
}

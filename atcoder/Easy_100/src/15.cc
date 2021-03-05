#include<bits/stdc++.h>
using namespace std;
#define rep(i, c) for(int i = 0; i < (int)c; i++)

// 自力AC済み

int main(){
    int N;
    int x = -1;
    int ans = 0;

    cin >> N;
    vector<int> v(N);
    rep(i, N) cin >> v[i];

    // 配列を半分に分けたときの、境目の数
    sort(v.begin(), v.end());
    ans = v[N/2] - v[N/2-1];

    cout << ans << endl;


    return 0;
}

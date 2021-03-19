#include<bits/stdc++.h>
using namespace std;
#define rep(i, c) for(int i = 0; i < (int)c; i++)

int main(){
    int N, M, X;
    cin >> N >> M >> X;

    vector<int> sq(M);
    rep(i, M) cin >> sq[i];

    int down_cost = 0;
    int down_X = X;

    while (true){
        down_X--;
        if (down_X == 0 || down_X == N) break;

        rep(i, M) if (down_X == sq[i]) down_cost++;
    }

    int up_cost = 0;
    int up_X = X;

    while (true){
        up_X++;
        if (up_X == 0 || up_X == N) break;

        rep(i, M) if (up_X == sq[i]) up_cost++;
    }

    int ans = min(down_cost, up_cost);

    cout << ans << endl;

    return 0;
}

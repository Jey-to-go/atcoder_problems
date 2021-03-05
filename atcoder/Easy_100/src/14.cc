#include<bits/stdc++.h>
#include <math.h>
using namespace std;
#define rep(i, c) for(int i = 0; i < (int)c; i++)

// 解説見た

int main(){
    double N, K;
    double old_x = INFINITY;
    double x;
    double ans;

    cin >> N >> K;
    x = N;

    while (1){
        x = x - K;
        if (x < 0) x *= -1;
        cout << x << ", old: " << old_x <<  endl;

        if (x > old_x) {
            ans = old_x;
            break;
        }

        old_x = x;
    }

    cout << ans << endl;

    return 0;
}

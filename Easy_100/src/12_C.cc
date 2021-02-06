#include<bits/stdc++.h>
using namespace std;
#define rep(i, c) for(int i = 0; i < (int)c; i++)

// 円の最短経路は、円環で考えよう！
// 1つの線として考えるのがよいかと。

int main() {
    int K, N;
    cin >> K >> N;

    int A[N];
    rep(i, N) cin >> A[i];

    int min_dis;

    rep(i, N) {
        int t = A[i];
        int dis = 0;

        // 時計回り
        if (i != 0) {
            dis = (K - t) + (t - A[i-1]);
            min_dis = min(min_dis, dis);
        } else {
            dis = A[N-1] - t
            min_dis = min(min_dis, dis);
        }

        // 反時計
        if (i != N-1){
            dis = t + (K - A[i+1]);
            min_dis = min(min_dis, dis);
        } else {
            dis = t - A[0];
            min_dis = min(min_dis, dis);
        }

        // 行き来
        if ()

        dis = (A[N-1] - t)*2 + (t - A[0])*2;
        min_dis = min(min_dis, dis);




    }
}

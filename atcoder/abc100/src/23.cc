#include<bits/stdc++.h>
using namespace std;
#define rep(i, c) for(int i = 0; i < (int)c; i++)

int main(){
    int N, D, X;
    cin >> N >> D >> X;

    vector<int> A(N);
    rep(i, N) cin >> A[i];

    int total = 0;

    rep(i, N) {
        rep(j, D) {
            if ((A[i] * j + 1) > D) break;
            else ++total;
        }
    }

    cout << total + X << endl;


    return 0;
}

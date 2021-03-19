#include<bits/stdc++.h>
using namespace std;
#define rep(i, c) for(int i = 0; i < (int)c; i++)

int main(){
    int N;
    cin >> N;
    vector<int> a(N);

    int x;
    rep(i, N) {
        cin >> x;
        a[i] = x-1;
    }

    int count = 0;

    rep(i, N) {
        int idx = a[i];
        if (i == a[idx]) count++; // 引数・引数引用要素は１～基準で考える
    }

    cout << count/2 << endl;

    return 0;
}

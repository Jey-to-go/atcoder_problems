#include<bits/stdc++.h>
using namespace std;
#define rep(i, c) for(int i = 0; i < (int)c; i++)

int main(){
    int N;
    cin >> N;

    vector<int> A(N);
    for (int i=0; i<N; i++) cin >> A[i];

    // revの引数 => Aの要素
    // 繰り返しで入れてあげる。
    vector<int> rev(N);
    rep(int i=0; i<N; i++) rev[A[i]-1] = i + 1;
    for (int i=0; i<N; i++) cout << rev[i] << endl;

    return 0;
}

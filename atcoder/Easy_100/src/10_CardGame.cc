#include<bits/stdc++.h>
#include<iostream>
#include<array>
using namespace std;
#define rep(i, c) for(int i = 0; i < (int)c; i++)

int main() {
    int N;
    cin >> N;

    vector<int> v[];
    rep(i, N) cin >> v[i];

    sort(v.rbegin(), v.rend());
    rep(i, N) cout << v[i] << endl;

    int Alice = 0;
    int Bob = 0;

    bool s = true;

    rep(i, N){
        if (s) {
            Alice += v[i];
            s = false;
        } else {
            Bob += v[i];
            s = true;
        }
    }

    cout << (Alice - Bob) << endl;
    return 0;
}

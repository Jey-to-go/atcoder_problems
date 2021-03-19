#include<bits/stdc++.h>
using namespace std;
#define rep(i, c) for(int i = 0; i < (int)c; i++)

int main() {
    string a, b;
    cin >> a >> b;

    a.append(b);
    int x = stoi(a); // 整数化

    string ans = "No";
    rep(i, x) if (i * i == x) ans = "Yes";

    cout << ans << endl;

    return 0;
}

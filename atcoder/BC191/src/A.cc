#include<bits/stdc++.h>
using namespace std;
#define rep(i, c) for(int i = 0; i < (int)c; i++)

int main(){
    double v, t, s, d;
    cin >> v >> t >> s >> d;

    string ans = "No";

    double c = d/v;
    if (c >= t && c <= s) ans = "No";
    else ans = "Yes";

    cout << ans << endl;

    return 0;
}

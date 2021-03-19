#include<bits/stdc++.h>
using namespace std;
#define rep(i, c) for(int i = 0; i < (int)c; i++)

int main(){
    string S;
    cin >> S;

    vector<int> v;

    rep(i, S.length()) {
        string unique_str;
        char x;

        rep(j, S.length()-i) {
            x = S[i+j];
            if (x == 'A' || x == 'C' || x == 'G' || x == 'T') unique_str += x;
            else break;
        }

        v.push_back(unique_str.length());
    }


    int value = -1;
    rep(i, v.size()) {
        value = max(value, v[i]);
    }

    cout << value << endl;


    return 0;
}

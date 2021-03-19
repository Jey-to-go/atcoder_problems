#include<bits/stdc++.h>
using namespace std;
#define rep(i, c) for(int i = 0; i < (int)c; i++)

int main(){
    int s;
    cin >> s;

    vector<int> a;
    a.push_back(s);

    int x = s;
    int c = 0;

    while(1) {
        if (x%2==0) x = x/2;
        else x = x * 3 + 1;

        a.push_back(x);
        c++;

        if (count(a.begin(), a.end(), x) == 2) break;
    }


    cout << c + 1 << endl;
    return 0;
}

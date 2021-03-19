#include<bits/stdc++.h>
using namespace std;
#define rep(i, c) for(int i = 0; i < (int)c; i++)
// 素数かどうかのライブラリあり！！！

int main(){
    int prime;
    cin >> prime;

    while (1){
        int count = 0;
        rep(i, prime) {
            if (prime % (i+1) == 0) ++count;
        }
        if (count == 2) break;

        prime++;
    }

    cout << prime << endl;

    return 0;

}

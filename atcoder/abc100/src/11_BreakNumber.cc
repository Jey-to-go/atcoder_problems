#include<bits/stdc++.h>
using namespace std;
#define rep(i, c) for(int i = 0; i < (int)c; i++)

int main() {
    int N;
    cin >> N;
    int m = 0;
    int x = 1;

    rep(i, N) {
        int value = i + 1;
        // cout << value << ": " << endl;

        int count = 0;
        while (1) {
            if (value%2 == 1) break; // 割り切れる？
            value = value / 2;
            count++;
        }

        // cout << count << endl;

        if (m < count) x = i + 1;
        m = max(m, count);
    }

    cout << x << endl;
}

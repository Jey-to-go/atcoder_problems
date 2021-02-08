#include<iostream>
using namespace std;
#define rep(i, c) for(int i = 0; i < (int)c; i++)

int main() {
    int A, B, C;
    cin >> A >> B >> C;

    while (1)
    {
        if (C == 0) {
            if (A==0) {
                cout << "Aoki" << endl;
                break;
            } else A--;

            if (B==0) {
                cout << "Takahashi" << endl;
                break;
            } else B--;
        } else {
            if (B==0) {
                cout << "Takahashi" << endl;
                break;
            } else B--;

            if (A==0) {
                cout << "Aoki" << endl;
                break;
            } else A--;
        }
    }

    return 0;
}

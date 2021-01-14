#include <iostream>

using namespace std;

int main(void) {
    int a, b, c;
    string s;


    // 入力を一気に取得（半角スペースも改行も同じ空白文字扱いなので可能）
    cin >> a >> b >> c >> s;
    cout << a + b + c << " " << s << endl;

    return 0;
}

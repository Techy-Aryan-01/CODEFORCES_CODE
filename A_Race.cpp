#include <iostream>
#include <algorithm>

using namespace std;

void f() {
    int a, b, c;
    cin >> a >> b >> c;

    int l = min(b, c);
    int r = max(b, c);

    if (a > l && a < r) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }
}

int main() {


    int t;
    cin >> t;
    while (t--) {
        f();
    }

    return 0;
}

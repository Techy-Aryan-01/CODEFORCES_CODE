
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void f() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    long long cnt = 0;

    for (int k = 2; k < n; ++k) {
        long long x;
        if (k == n - 1) {
            x = v[k];
        } else {
            x = max((long long)v[k], (long long)v[n - 1] - v[k]);
        }

        int l = 0, r = k - 1;
        while (l < r) {
            if ((long long)v[l] + v[r] > x) {
                cnt += (r - l);
                --r;
            } else {
                ++l;
            }
        }
    }

    cout << cnt << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        f();
    }
    return 0;
}


#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

const int INF = 1e9;

bool check(int l1, int r1, int l2, int r2) {
    return max(l1, l2) <= min(r1, r2) + 1;
}

void solve_case() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i) {
        cin >> v[i];
    }

    for (int i = 0; i < n - 1; ++i) {
        if (abs(v[i] - v[i + 1]) <= 1) {
            cout << 0 << "\n";
            return;
        }
    }

    int res = INF;

    for (int k = 0; k < n - 1; ++k) {
        vector<pair<int, int>> r(n);
        int mn = v[k + 1], mx = v[k + 1];
        r[k + 1] = {mn, mx};
        for (int j = k + 2; j < n; ++j) {
            mn = min(mn, v[j]);
            mx = max(mx, v[j]);
            r[j] = {mn, mx};
        }

        int lmn = v[k], lmx = v[k], j = n - 1;

        for (int i = k; i >= 0; --i) {
            lmn = min(lmn, v[i]);
            lmx = max(lmx, v[i]);

            while (j > k + 1) {
                int rm = r[j - 1].first;
                int rx = r[j - 1].second;
                if (check(lmn, lmx, rm, rx)) {
                    --j;
                } else {
                    break;
                }
            }

            int rm = r[j].first;
            int rx = r[j].second;
            if (check(lmn, lmx, rm, rx)) {
                int tmp = (k - i) + (j - k - 1);
                res = min(res, tmp);
            }
        }
    }

    if (res == INF) {
        cout << -1 << "\n";
    } else {
        cout << res << "\n";
    }
}

int main() {
  
    int t;
    cin >> t;
    while (t--) {
        solve_case();
    }
    return 0;
}

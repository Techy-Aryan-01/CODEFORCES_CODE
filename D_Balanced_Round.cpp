#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);
        for (int &x : a) cin >> x;

        sort(a.begin(), a.end());

        int max_len = 1;
        int l = 0;

        for (int r = 1; r < n; ++r) {
            if (a[r] - a[r - 1] <= k) {
                max_len = max(max_len, r - l + 1);
            } else {
                l = r;  // reset window
            }
        }

        cout << n - max_len << "\n";
    }

    return 0;
}

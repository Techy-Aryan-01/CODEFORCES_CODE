#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a) cin >> x;

    vector<long long> prefix_max(n);
    prefix_max[0] = a[0];
    for (int i = 1; i < n; ++i) {
        prefix_max[i] = max(prefix_max[i-1], (long long)a[i]);
    }

    vector<long long> s(n + 1);
    s[0] = 0;
    for (int i = 1; i <= n; ++i) {
        s[i] = s[i-1] + a[n - i];
    }

    vector<long long> ans(n);
    for (int k = 1; k <= n; ++k) {
        int idx = n - k;
        long long sum1 = s[k];
        long long sum2 = s[k-1] + prefix_max[idx];
        ans[k-1] = max(sum1, sum2);
    }

    for (auto x : ans) {
        cout << x << ' ';
    }
    cout << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
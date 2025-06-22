#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

long long calculate_gcd(long long a, long long b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}

void solve() {
    int n;
    cin >> n;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i)
        cin >> a[i];

    long long G = a[0];
    for (int i = 1; i < n; ++i)
        G = calculate_gcd(G, a[i]);

    int count_G = 0;
    for (int i = 0; i < n; ++i)
        if (a[i] == G) count_G++;

    if (count_G > 0) {
        cout << (n - count_G) << '\n';
        return;
    }

    // Try to create one G
    bool found = false;
    for (int i = 0; i < n && !found; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (calculate_gcd(a[i], a[j]) == G) {
                found = true;
                break;
            }
        }
    }

    if (found)
        cout << n << '\n';       // 1 op to create a G, then (n - 1)
    else
        cout << (n + 1) << '\n'; // need 2 ops to create a G, then (n - 1)
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}


#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

const long long INF = 1e12;
const long long BIG = 2e14;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    cin >> n >> m;

    vector<vector<pair<int, int>>> g(n + 1);
    vector<vector<long long>> d(n + 1, vector<long long>(n + 1, INF));

    for (int i = 1; i <= n; ++i) {
        d[i][i] = 0;
    }

    for (int i = 0; i < m; ++i) {
        int a, b, w;
        cin >> a >> b >> w;
        g[a].emplace_back(b, w);
        d[b][a] = min(d[b][a], 1LL * w);
    }

    for (int k = 1; k <= n; ++k)
        for (int i = 1; i <= n; ++i)
            for (int j = 1; j <= n; ++j)
                if (d[i][k] != INF && d[k][j] != INF)
                    d[i][j] = min(d[i][j], d[i][k] + d[k][j]);

    int q;
    cin >> q;
    while (q--) {
        long long k;
        cin >> k;
        vector<long long> a(n + 1);
        for (int i = 1; i <= n; ++i) {
            cin >> a[i];
        }

        string res = "";

        vector<long long> b(n + 1, BIG);
        for (int u = 1; u <= n; ++u)
            for (int i = 1; i <= n; ++i)
                if (d[i][u] != INF)
                    b[u] = min(b[u], a[i] + d[i][u]);

        vector<long long> l(n + 1, BIG);
        vector<int> map(n + 1, 0);
        for (int u = 1; u <= n; ++u) {
            for (auto& [v, w] : g[u]) {
                if (a[v] + w < l[u]) {
                    l[u] = a[v] + w;
                    map[u] = v;
                }
            }
        }

        for (int u = 1; u <= n; ++u) {
            long long t = min(a[u], l[u]);
            if (t > b[u]) {
                res += '1';
                continue;
            }

            int ex = map[u];
            long long best = BIG;
            for (int j = 1; j <= n; ++j) {
                if (j == u || (ex && j == ex)) continue;
                if (d[j][u] != INF)
                    best = min(best, a[j] + d[j][u]);
            }

            long long c = BIG;
            if (best != BIG)
                c = best - t + 1;

            res += (c <= k ? '1' : '0');
        }

        cout << res << "\n";
    }

    return 0;
}

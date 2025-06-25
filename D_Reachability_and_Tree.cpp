#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>

using namespace std;

void bfs(int s, int p, bool dir, const vector<vector<int>>& g, vector<pair<int, int>>& res) {
    queue<pair<int, int>> q;
    q.push({s, p});
    while (!q.empty()) {
        auto [u, par] = q.front();
        q.pop();
        for (int v : g[u]) {
            if (v == par) continue;
            if (dir) {
                res.push_back({u, v});
            } else {
                res.push_back({v, u});
            }
            q.push({v, u});
        }
    }
}

void f() {
    int n;
    cin >> n;
    vector<vector<int>> g(n + 1);
    vector<int> deg(n + 1);

    for (int i = 0; i < n - 1; ++i) {
        int a, b;
        cin >> a >> b;
        g[a].push_back(b);
        g[b].push_back(a);
        deg[a]++;
        deg[b]++;
    }

    int mid = -1;
    for (int i = 1; i <= n; ++i) {
        if (deg[i] == 2) {
            mid = i;
            break;
        }
    }

    if (mid == -1) {
        cout << "NO\n";
        return;
    }

    cout << "YES\n";

    vector<pair<int, int>> res;
    int u = g[mid][0];
    int v = g[mid][1];

    res.push_back({u, mid});
    res.push_back({mid, v});

    bfs(u, mid, true, g, res);
    bfs(v, mid, false, g, res);

    for (auto& e : res) {
        cout << e.first << " " << e.second << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        f();
    }
    return 0;
}

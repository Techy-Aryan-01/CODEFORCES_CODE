#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


bool check(int x, int n, int m, const vector<vector<int>>& mat) {
    vector<pair<int, int>> cells;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (mat[i][j] > x + 1) return false;
            if (mat[i][j] > x) cells.push_back({i, j});
        }
    }

    if (cells.empty()) return true;

    int r0 = cells[0].first;
    int col = -1;
    bool ok1 = true;
    for (auto& [r, c] : cells) {
        if (r != r0) {
            if (col == -1) col = c;
            else if (col != c) {
                ok1 = false;
                break;
            }
        }
    }
    if (ok1) return true;

    int c0 = cells[0].second;
    int row = -1;
    bool ok2 = true;
    for (auto& [r, c] : cells) {
        if (c != c0) {
            if (row == -1) row = r;
            else if (row != r) {
                ok2 = false;
                break;
            }
        }
    }
    return ok2;
}

void solve() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> mat(n, vector<int>(m));
    int mx = 0;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j) {
            cin >> mat[i][j];
            mx = max(mx, mat[i][j]);
        }

    int l = 0, r = mx, ans = mx;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (check(mid, n, m, mat)) {
            ans = mid;
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }
    cout << ans << '\n';
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}

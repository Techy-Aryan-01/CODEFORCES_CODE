#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

typedef long long ll;
typedef pair<int, int> pii;

ll get_area(const vector<pii>& monsters, int skip = -1) {
    int min_x = INT_MAX, max_x = INT_MIN;
    int min_y = INT_MAX, max_y = INT_MIN;

    for (int i = 0; i < monsters.size(); ++i) {
        if (i == skip) continue;
        min_x = min(min_x, monsters[i].first);
        max_x = max(max_x, monsters[i].first);
        min_y = min(min_y, monsters[i].second);
        max_y = max(max_y, monsters[i].second);
    }

    return 1LL * (max_x - min_x + 1) * (max_y - min_y + 1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<pii> monsters(n);
        for (int i = 0; i < n; ++i) {
            cin >> monsters[i].first >> monsters[i].second;
        }

        if (n == 1) {
            cout << "1\n";
            continue;
        }

        ll min_cost = get_area(monsters); // Without removing any monster

        // Sort monsters by x and y coordinates to find the extremes
        vector<pii> sorted_x = monsters;
        vector<pii> sorted_y = monsters;
        sort(sorted_x.begin(), sorted_x.end());
        sort(sorted_y.begin(), sorted_y.end(), [](const pii& a, const pii& b) {
            return a.second < b.second;
        });

        // Try removing the leftmost and rightmost x monsters
        for (int i = 0; i < min(2, n); ++i) {
            ll area = get_area(monsters, find(monsters.begin(), monsters.end(), sorted_x[i]) - monsters.begin());
            min_cost = min(min_cost, area);
        }
        for (int i = max(0, n - 2); i < n; ++i) {
            ll area = get_area(monsters, find(monsters.begin(), monsters.end(), sorted_x[i]) - monsters.begin());
            min_cost = min(min_cost, area);
        }

        // Try removing the bottommost and topmost y monsters
        for (int i = 0; i < min(2, n); ++i) {
            ll area = get_area(monsters, find(monsters.begin(), monsters.end(), sorted_y[i]) - monsters.begin());
            min_cost = min(min_cost, area);
        }
        for (int i = max(0, n - 2); i < n; ++i) {
            ll area = get_area(monsters, find(monsters.begin(), monsters.end(), sorted_y[i]) - monsters.begin());
            min_cost = min(min_cost, area);
        }

        cout << min_cost << "\n";
    }

    return 0;
}
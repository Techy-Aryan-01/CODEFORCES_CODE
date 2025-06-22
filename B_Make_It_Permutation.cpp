#include <bits/stdc++.h>
using namespace std;

void process_case() {
    int size;
    cin >> size;

    vector<array<int, 3>> result;

    for (int r = 2; r <= size; ++r) {
        result.push_back({r, 1, r});
    }
    for (int r = 1; r <= size - 2; ++r) {
        result.push_back({r, r + 1, size});
    }

    cout << result.size() << '\n';
    for (const auto& op : result) {
        cout << op[0] << ' ' << op[1] << ' ' << op[2] << '\n';
    }
}

int main() {
    int testcases;
    cin >> testcases;

    while (testcases--) {
        process_case();
    }

    return 0;
}

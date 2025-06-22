#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, s;
        cin >> n >> s;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) cin >> arr[i];

        int min_x = arr[0];
        int max_x = arr[n - 1];

        int steps = min(abs(s - min_x), abs(s - max_x)) + (max_x - min_x);
        cout << steps << endl;
    }

    return 0;
}

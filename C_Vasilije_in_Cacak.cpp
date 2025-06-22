#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n, k, x;
        cin >> n >> k >> x;

        // Minimum sum of first k numbers
        long long minSum = k * (k + 1) / 2;

        // Maximum sum of last k numbers from n
        long long maxSum = k * (2 * n - k + 1) / 2;

        if (x >= minSum && x <= maxSum) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}

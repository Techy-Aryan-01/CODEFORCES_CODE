#include <iostream>
#include <algorithm>

using namespace std;

void solve() {
    int t;
    cin >> t;
    while (t--) {
        long long k, a, b, x, y;
        cin >> k >> a >> b >> x >> y;
        
        long long max_total = 0;
       
        long long m1 = 0;
        long long remaining = k;
        if (k >= a) {
            m1 = (k - a) / x + 1;
            remaining = k - m1 * x;
        }
        long long m2 = 0;
        if (remaining >= b) {
            m2 = (remaining - b) / y + 1;
        }
        long long total1 = m1 + m2;
        

        m2 = 0;
        remaining = k;
        if (k >= b) {
            m2 = (k - b) / y + 1;
            remaining = k - m2 * y;
        }
        m1 = 0;
        if (remaining >= a) {
            m1 = (remaining - a) / x + 1;
        }
        long long total2 = m1 + m2;
        
        max_total = max(total1, total2);
        cout << max_total << endl;
    }
}

int main() {
    solve();
    return 0;
}
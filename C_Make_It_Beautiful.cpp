#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <map>

using namespace std;

long long n;
unsigned __int128 k;
vector<int> a;
vector<int> C;

map<unsigned __int128, long long> memo[64];

long long solve(int bit, unsigned __int128 carry) {
    if (bit > 62) {
        return 0;
    }
    if (memo[bit].count(carry)) {
        return memo[bit][carry];
    }

    unsigned __int128 total_units = carry;
    
    // The number of elements we want to have bit `i` set can range from 0 to n.
    // The cost is `s - C[bit]`. This must be at most `total_units`.
    // So, s <= C[bit] + total_units.
    long long low_s = 0;
    unsigned __int128 high_s_unsigned = n;
    unsigned __int128 max_s_by_cost = (unsigned __int128)C[bit] + total_units;
    if (max_s_by_cost < high_s_unsigned) {
        high_s_unsigned = max_s_by_cost;
    }
    long long high_s = (long long)high_s_unsigned;
    
    // If no valid s is possible, beauty is 0 for this path.
    if (low_s > high_s) {
        return memo[bit][carry] = 0;
    }

    // Function to calculate beauty for a given s
    auto get_beauty = [&](long long s) {
        // s must be non-negative
        if (s < 0) return -1LL; 
        unsigned __int128 cost = s - C[bit];
        return s + solve(bit + 1, (total_units - cost) / 2);
    };
    
    // Ternary search for optimal s
    while (high_s - low_s >= 3) {
        long long m1 = low_s + (high_s - low_s) / 3;
        long long m2 = high_s - (high_s - low_s) / 3;
        if (get_beauty(m1) < get_beauty(m2)) {
            low_s = m1;
        } else {
            high_s = m2;
        }
    }

    long long max_beauty = 0;
    for (long long s = low_s; s <= high_s; ++s) {
        max_beauty = max(max_beauty, get_beauty(s));
    }
    
    return memo[bit][carry] = max_beauty;
}

void run_test_case() {
    long long k_ll;
    cin >> n >> k_ll;
    k = k_ll;

    a.resize(n);
    C.assign(63, 0);
    for (int i = 0; i < (int)n; ++i) {
        cin >> a[i];
    }
    
    for(int j=0; j<63; ++j) {
        for(int i=0; i<n; ++i) {
            if(((long long)a[i] >> j) & 1) C[j]++;
        }
    }

    for (int i = 0; i < 64; ++i) {
        memo[i].clear();
    }
    
    cout << solve(0, k) << endl;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--) {
        run_test_case();
    }
    return 0;
}
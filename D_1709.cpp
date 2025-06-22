#include<bits/stdc++.h>
using namespace std;

#define int long long

int32_t main() {


    int test_cases;
    cin >> test_cases;

    while (test_cases--) {
        int n;
        cin >> n;

        vector<int> A(n), B(n);
        for (int i = 0; i < n; i++) cin >> A[i];
        for (int i = 0; i < n; i++) cin >> B[i];

        vector<int> ops, pos;

   
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - 1; j++) {
                if (A[j] > A[j + 1]) {
                    swap(A[j], A[j + 1]);
                    ops.push_back(1);
                    pos.push_back(j + 1);
                }
            }
        }

   
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < n - 1; j++) {
                if (B[j] > B[j + 1]) {
                    swap(B[j], B[j + 1]);
                    ops.push_back(2);
                    pos.push_back(j + 1);
                }
            }
        }

        for (int i = 0; i < n; i++) {
            if (A[i] > B[i]) {
                swap(A[i], B[i]);
                ops.push_back(3);
                pos.push_back(i + 1);
            }
        }

        cout << ops.size() << '\n';
        for (int i = 0; i < ops.size(); i++) {
            cout << ops[i] << ' ' << pos[i] << '\n';
        }
    }

    return 0;
}

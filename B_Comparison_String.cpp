
#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int minCost(string &s) {
    int maxLen = 0, currentLen = 1;
    for (int i = 1; i < s.size(); ++i) {
        if (s[i] == s[i-1]) {
            currentLen++;
        } else {
            maxLen = max(maxLen, currentLen);
            currentLen = 1;
        }
    }
    maxLen = max(maxLen, currentLen);
    return maxLen + 1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        cout << minCost(s) << "\n";
    }
    return 0;
}

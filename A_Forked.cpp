#include <iostream>
#include <set>
#include <vector>
using namespace std;

// Function to generate all 8 knight move directions from a position
vector<pair<int, int>> getKnightMoves(int x, int y, int a, int b) {
    return {
        {x + a, y + b}, {x + a, y - b},
        {x - a, y + b}, {x - a, y - b},
        {x + b, y + a}, {x + b, y - a},
        {x - b, y + a}, {x - b, y - a}
    };
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int a, b;
        cin >> a >> b;

        int xK, yK, xQ, yQ;
        cin >> xK >> yK >> xQ >> yQ;

        set<pair<int, int>> queenAttackPos;
        for (auto move : getKnightMoves(xQ, yQ, a, b)) {
            queenAttackPos.insert(move);
        }

        int commonForks = 0;
        for (auto move : getKnightMoves(xK, yK, a, b)) {
            if (queenAttackPos.count(move)) {
                commonForks++; // only insert unique ones
                queenAttackPos.erase(move);
            }
        }

        cout << commonForks << endl;
    }

    return 0;
}

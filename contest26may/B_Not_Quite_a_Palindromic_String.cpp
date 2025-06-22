

#include <iostream>
#include <string>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int T; 
    std::cin >> T;

    while (T--) {
        int lengthStr, targetGood;
        std::cin >> lengthStr >> targetGood;

        std::string bits;
        std::cin >> bits;

        int zeroCount = 0;
        for (auto ch : bits) {
            if (ch == '0') zeroCount++;
        }

        int oneCount = lengthStr - zeroCount;
        int halfPairs = lengthStr / 2;
        int minBadPairsNeeded = halfPairs - targetGood;

        if (zeroCount < minBadPairsNeeded || oneCount < minBadPairsNeeded) {
            std::cout << "NO\n";
            continue;
        }

        int leftoverZeros = zeroCount - minBadPairsNeeded;
        int leftoverOnes = oneCount - minBadPairsNeeded;

        int achievableGoodPairs = (leftoverZeros / 2) + (leftoverOnes / 2);

        if (achievableGoodPairs >= targetGood) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }
    return 0;
}
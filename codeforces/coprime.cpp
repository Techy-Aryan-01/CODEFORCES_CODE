// #include <iostream>
// using namespace std;

// int gcd(int x, int y) {
//     while (y) {
//         int temp = y;
//         y = x % y;
//         x = temp;
//     }
//     return x;
// }

// int countMinimalCoprimeSegments(int x, int y) {
//     int count = 0;

//     for (int i = x; i <= y; i++) {
//         for (int j = i; j <= y; j++) {
//             if (gcd(i, j) == 1) { // Found a coprime pair
//                 count++; 
//                 break; // Move to next `i`, as this is minimal
//             }
//         }
//     }

//     return count;
// }

// int main() {
//     int t;
//     cin >> t;

//     while (t--) {
//         int x, y;
//         cin >> x >> y;
//         cout << countMinimalCoprimeSegments(x, y) << endl;
//     }

//     return 0;
// }









#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        int x, y;
        cin >> x >> y;
        if (x == 1 && y == 1) {
            cout << 1 << endl;
        } else {
            cout << y - x << endl;
        }
    }
    return 0;
}



















#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for(int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        
        int count = 0;
        int last = -2;
        for(int i = 0; i < n; ++i) {
            if (a[i] > last + 1) {
                count++;
                last = a[i];
            }
        }
        
        cout << count << endl;
    }
    return 0;
}

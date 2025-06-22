// #include <iostream>
// #include <vector>
// using namespace std;

// int main() {
//     int t; 
//     cin >> t;

//     while (t--) {
//         int n, k; 
//         cin >> n >> k;
//         vector<int> arr(n);

//         for (int i = 0; i < n; i++) 
//             cin >> arr[i];

//         // Check if k is present
//         bool hasK = false;
//         for (int x : arr) 
//             if (x == k) hasK = true;

//         if (!hasK) {
//             cout << "NO\n";
//             continue;
//         }

//         // Build prefix frequency: prefFreq[num][i]
//         // nums go from 1 to 100 (problem constraint)
//         vector<vector<int>> prefFreq(101, vector<int>(n, 0));

//         for (int num = 1; num <= 100; num++) {
//             int count = 0;
//             for (int i = 0; i < n; i++) {
//                 if (arr[i] == num) count++;
//                 prefFreq[num][i] = count;
//             }
//         }

//         bool found = false;

//         // Check all subarrays [l,r]
//         for (int l = 0; l < n && !found; l++) {
//             for (int r = l; r < n && !found; r++) {
//                 // Frequency of k in [l, r]
//                 int freqK = prefFreq[k][r] - (l > 0 ? prefFreq[k][l - 1] : 0);

//                 // Find max frequency of any other number
//                 int maxOther = 0;
//                 for (int num = 1; num <= 100; num++) {
//                     if (num == k) continue;
//                     int freqNum = prefFreq[num][r] - (l > 0 ? prefFreq[num][l - 1] : 0);
//                     if (freqNum > maxOther) maxOther = freqNum;
//                 }

//                 if (freqK > maxOther) {
//                     found = true;
//                 }
//             }
//         }

//         cout << (found ? "YES\n" : "NO\n");
//     }

//     return 0;
// }


#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k;
        cin>>n>>k;

        int arr[n];

        bool flag = false;

        for(int i = 0; i < n; i++){
            cin>>arr[i];

            if(arr[i] == k) flag = true;
        }

        cout<<(flag?"YES\n":"NO\n");
    }
}

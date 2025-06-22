// #include <iostream>
// #include <vector>
// #include <unordered_set>
// using namespace std;

// // case -> 1,1,1,0

// int main() {
//     int testCases;
//     cin >> testCases;
//     while (testCases--) {
//         int size;
//         cin >> size;
//         vector<int> elements(size);
//         for (int idx = 0; idx < size; idx++) {
//             cin >> elements[idx];
//         }

//         unordered_set<int> uniqueValues(elements.begin(), elements.end());

//         if (uniqueValues.size() == 1) {
//             cout << "YES" << endl;
//             continue;
//         }

//         bool consecutiveZeros = false;
//         for (int idx = 0; idx < size - 1; idx++) {
//             if (elements[idx] == 0 && elements[idx + 1] == 0) {
//                 consecutiveZeros = true;
//                 break;
//             }
//         }

//         if (consecutiveZeros) {
//             cout << "YES" << endl;
//         } else {
//             cout << "NO" << endl;
//         }
//     }
//     return 0;
// }






// #include <bits/stdc++.h>
// using namespace std;

// int solve() {
//     int n, m, a, b;
//     cin >> n >> m >> a >> b;
    
//     int turns = 0;
//     while (n > 1 || m > 1) {
//         if (n > 1) {
//             int cut = n / 2;
//             if (a > cut) {
//                 n -= cut;
//                 a -= cut;
//             } else {
//                 n = cut;
//             }
//         } else if (m > 1) {
//             int cut = m / 2;
//             if (b > cut) {
//                 m -= cut;
//                 b -= cut;
//             } else {
//                 m = cut;
//             }
//         }
//         turns++;
//     }
    
//     return turns;
// }

// int main() {
//     ios_base::sync_with_stdio(false);
//     cin.tie(nullptr);
    
//     int t;
//     cin >> t;
//     while (t--) {
//         cout << solve() << '\n';
//     }
    
//     return 0;
// }





// #include <vector>
// #include <algorithm>
// #include <unordered_map>
// #include <iostream>

// using namespace std;

// int digitSum(int num) {
//     int sum = 0;
//     while (num > 0) {
//         sum += num % 10;
//         num /= 10;
//     }
//     return sum;
// }

// int minSwaps(vector<int>& nums) {
//     vector<pair<int, int>> indexedNums;
//     for (int i = 0; i < nums.size(); ++i) {
//         int sum = digitSum(nums[i]);
//         indexedNums.emplace_back(sum, nums[i]);
//     }
    
//     // Create a sorted version of the array based on digit sum and then value
//     vector<pair<int, int>> sortedIndexedNums = indexedNums;
//     sort(sortedIndexedNums.begin(), sortedIndexedNums.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
//         if (a.first != b.first) {
//             return a.first < b.first;
//         } else {
//             return a.second < b.second;
//         }
//     });
    
//     // Create a map from value to its desired index in the sorted array
//     unordered_map<int, int> valueToIndex;
//     for (int i = 0; i < sortedIndexedNums.size(); ++i) {
//         valueToIndex[sortedIndexedNums[i].second] = i;
//     }
    
//     vector<bool> visited(nums.size(), false);
//     int swaps = 0;
    
//     for (int i = 0; i < nums.size(); ++i) {
//         if (!visited[i]) {
//             int j = i;
//             int cycleSize = 0;
//             while (!visited[j]) {
//                 visited[j] = true;
//                 j = valueToIndex[nums[j]];
//                 cycleSize++;
//             }
//             if (cycleSize > 1) {
//                 swaps += (cycleSize - 1);
//             }
//         }
//     }
    
//     return swaps;
// }

// int main() {
//     // Example 1
//     vector<int> nums1 = {37, 100};
//     cout << "Example 1 Output: " << minSwaps(nums1) << endl; // Expected: 1

//     // Example 2
//     vector<int> nums2 = {22, 14, 33, 7};
//     cout << "Example 2 Output: " << minSwaps(nums2) << endl; // Expected: 0

//     // Example 3
//     vector<int> nums3 = {18, 43, 34, 16};
//     cout << "Example 3 Output: " << minSwaps(nums3) << endl; // Expected: 2

//     // Custom Test Case
//     vector<int> nums4 = {10, 20, 30, 40}; // All digit sums are 1, 2, 3, 4 → already sorted
//     cout << "Custom Test Output: " << minSwaps(nums4) << endl; // Expected: 0

//     return 0;
// }




// sorting possible by reversal or not
// #include<iostream>
// #include<vector>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;

//     while(t--){
//         int n, k;
//         cin >> n >> k;
//         vector<int> nums(n);

//         for(int i = 0; i < n; i++){
//             cin >> nums[i];
//         }

//         if(k >= 2) {
//             cout << "YES\n";
//         } else {
//             bool sorted = true;
//             for(int i = 1; i < n; i++){
//                 if(nums[i] < nums[i-1]){
//                     sorted = false;
//                     break;
//                 }
//             }

//             if(sorted) cout << "YES\n";
//             else cout << "NO\n";
//         }
//     }

//     return 0;
// }




// codeforces . Line Trip

#include<iostream>
#include<vector>
#include<climits>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,x;

        cin>>n>>x;

        vector<int> nums(n);

        for(int i = 0; i < n; i++){
            cin>>nums[i];
        }

        int min_fuel = INT_MIN;

        int prev = 0;

        int curr = 0;

        for(int i = 0; i < n; i++){
            curr = nums[i];

            int diff = curr - prev;

            min_fuel = max(min_fuel,diff);

            prev = curr;

        }

        
            min_fuel = max(min_fuel,(x-curr)*2);
        

        cout<<min_fuel<<endl;

    }
}




















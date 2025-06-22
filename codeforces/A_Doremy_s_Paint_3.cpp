#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int arr[n];
        unordered_map<int, int> mp;

        for(int i = 0; i < n; i++){
            cin >> arr[i];
            mp[arr[i]]++;
        }

        if(mp.size() == 1) cout << "Yes\n";
        else if(mp.size() > 2) cout << "No\n";
        else{
            int first = -1, second = -1;
            for(auto ele : mp){
                if(first == -1) first = ele.first;
                else second = ele.first;
            }

            int diff = abs(mp[first] - mp[second]);
            cout << ((diff <= 1) ? "Yes\n" : "No\n");
        }
    }

    return 0;
}

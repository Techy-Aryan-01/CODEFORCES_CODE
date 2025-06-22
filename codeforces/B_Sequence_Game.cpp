#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int arr[n];
        vector<int> res;

        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        res.push_back(arr[0]);

        for(int i = 1; i < n; i++){
            if(arr[i] >= arr[i - 1]){
                res.push_back(arr[i]);
            } else {
                res.push_back(1);  // safe filler
                res.push_back(arr[i]);
            }
        }

        cout << res.size() << endl;
        for(int i = 0; i < res.size(); i++){
            cout << res[i] << " ";
        }
        cout << endl;
    }
}

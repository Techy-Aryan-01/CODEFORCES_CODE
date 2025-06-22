

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;

    cin>>t;

    

    while(t--){
        int n;

        cin>>n;

        vector<char> arr(n);
        vector<int> freq(26,0);

        for(int i = 0; i < n; i++) {
            cin>>arr[i];
            freq[arr[i] - 'a']++;
        }

        bool flag = false;

        for(int i = 0; i < n; i++){
            if(freq[arr[i] - 'a'] > 1){
                if(i > 0 && i < n-1) {
                    flag = true;
                    break;
                }
            }
        }
        
        if(flag) cout<<"Yes"<<endl;

        else cout<<"No"<<endl;


    }
}
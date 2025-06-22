

#include<iostream>
#include<map>

using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int arr[n];

        map<int,int> mp;

        for(int i = 0; i < n; i++){
            cin>>arr[i];
            mp[arr[i]]++;
        }

        if(mp.size() == 1) {
            cout<<-1<<endl;
        }

        else{
            auto mx = *prev(mp.end());

           cout<<n-mx.second<<" "<<mx.second<<endl;

           for(int i = 0; i < n; i++){
            if(arr[i] != mx.first) cout<<arr[i]<<" ";
           }
           cout<<endl;

           for(int i = 0; i < mx.second; i++){
            cout<<mx.first<<" ";
           }

           cout<<endl;
        }
    }
    return 0;
}

#include<iostream>
using namespace std;

int main(){
    int t;

    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int arr[n];

        for(int i = 0; i < n; i++) cin>>arr[i];

        int ans = arr[n-1] - arr[0];

        for(int i = 1; i < n; i++) ans = max(ans,arr[i] - arr[0]);

        for(int i = 0; i < n-1; i++) ans = max(ans,arr[n-1] - arr[i]);

        for(int i = 0; i < n-1; i++) ans = max(ans,arr[i] - arr[i+1]);

        cout<<ans<<endl;
    }

    return 0;
}
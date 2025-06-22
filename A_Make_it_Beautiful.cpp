
#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int arr[n];

        for(int i = 0; i < n; i++){
            cin>>arr[n];
        }

        sort(arr,arr+n);

        int unique = 1;

        for(int i = 1; i < n; i++){
            if(arr[i] != arr[i-1]) unique++;
        }

        if(unique <= n/2) cout<<"NO"<<endl;

        else cout<<"YES"<<endl;


    }
}
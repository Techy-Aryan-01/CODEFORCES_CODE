

#include<iostream>
using namespace std;

int main(){
    int t;

    cin>>t;

    while(t--){
        long long a,b,n;

        cin>>a>>b>>n;

        long long arr[n];

        for(int i = 0; i < n; i++) cin>>arr[i];

        long long time_to_explode = b;

        for(int i = 0; i < n; i++){
            time_to_explode += min(arr[i],a);
        }

        // time_to_explode--;

        cout<<time_to_explode<<endl;
        
    }
    return 0;
}
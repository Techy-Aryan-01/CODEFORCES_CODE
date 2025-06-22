
#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int pos = 0;

        for(int i = 0; i < n; i++) {
            cin>>arr[i];
            if(arr[i] == 1) pos++;
        }

        int req = 0;

        if(n%2 == 0) req = n/2;
        else req = n/2 + 1;

        if(pos <= req){
            int neg = n - req;

            if(neg % 2 != 0){
                cout<<req-pos+1<<endl;
            }
            else cout<<req-pos<<endl;
        }

        else{
            int neg = n - pos;

            if(neg % 2 == 0) cout<<0<<endl;
            else cout<<1<<endl;
        }
    }
}
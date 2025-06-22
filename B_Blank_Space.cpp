

#include<iostream>
#include<climits>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        int arr[n];
        int mx_zero = INT_MIN;

        int count = 0;

        for(int i = 0; i < n; i++){
            cin>>arr[i];
            if(arr[i] == 0) count++;
            else{
                mx_zero = max(mx_zero,count);
                count = 0;
            }
        }

         mx_zero = max(mx_zero,count);

         cout<<mx_zero<<endl;

    }
}


#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        char arr[n];

        for(int i = 0; i < n; i++) cin>>arr[i];

        int i = 0;
        int j = n-1;

        while(i <= j && arr[i] != arr[j]){
            i++;
            j--;
        }

        cout<<j-i+1<<endl;

    }

    return 0;
}
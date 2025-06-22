#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n, k; // Use long long instead of int
        cin>>n>>k;

        if(n % 2 != 0 && k % 2 == 0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}

#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n,k;

        cin>>n>>k;

        string res = "";

        for(int i = 0; i < k; i++){
            res += '1';
        }

        for(int i = 0; i < n-k; i++) res += '0';

        cout<<res<<endl;
    }

    return 0;
}
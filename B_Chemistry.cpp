
#include<iostream>
using namespace std;

int main(){
    int t;

    cin>>t;

    while(t--){
        int arr[26] = {0};


        int n,k;

        cin>>n>>k;

        char brr[n];

        for(int i = 0; i < n; i++){
            cin>>brr[i];

            arr[brr[i]-'a']++;
        }

        int palindrome_len = n - k;

        int pairs_required = palindrome_len / 2;


        for(int i = 0; i < 26; i++){
             pairs_required -= arr[i] / 2;
        }

        if(pairs_required <= 0) cout<<"YES"<<endl;

        else cout<<"NO"<<endl;
    }

    return 0;
}
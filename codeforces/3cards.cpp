

#include<iostream>
using namespace std;

int main(){

    int t; // no of test cases

    cin>>t;

    for(int i = 1; i <= t; i++){
        int a,b,c;
        cin>>a>>b>>c;


        int left_card = c-b;

        left_card -= (b-a);


        if(left_card % 3 != 0 || left_card < 0) cout<<"NO\n";

        else cout<<"YES\n";
    }

    return 0;
}
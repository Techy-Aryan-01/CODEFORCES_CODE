

#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
 
    while(t--){
        string s;
        cin>>s;
        int year = stoi(s);
        bool found = false;
 
        // Iterate over all possible sums s from 0 to 99
        for(int s_sum = 0; s_sum <= 99; s_sum++){
            if(s_sum * s_sum == year){
               cout<<0<<" "<<s_sum<<endl;
               found = true;
               break;
            }
        }
 
        if(!found){
            cout << -1 << endl;
        }
    }
    return 0;
}
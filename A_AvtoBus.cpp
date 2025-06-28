
#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        if(n%4 !=0 && n%6 != 0) cout<<-1<<endl;

        else{
          int min_val = (n%6 == 0)?n/6:((n-4) % 6 == 0)?n/6 + 1: n/ 4;

          int max_val = (n%4 == 0)?n/4:n/6;

          cout<<min_val<<" "<<max_val<<endl;

        }
    }

    return 0;
}
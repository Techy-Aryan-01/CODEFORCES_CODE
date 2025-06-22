

#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int a,b,c,d;
        cin>>a>>b>>c>>d;


        if(b > d){
            cout<<-1<<endl;
        }

        else {
            int steps = (d - b);
            a += steps;
            if(a < c) cout<<-1<<endl;
            else cout<<steps + (a - c)<<endl;
        }
    }

    return 0;
}
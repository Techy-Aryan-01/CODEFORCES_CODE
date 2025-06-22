
#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i = 0; i < t; i++){
        int n;
        cin>>n;

        int even_count = 0;
        int odd_count = 0;

        for(int i = 0; i < n; i++){
            int x;
            cin>>x;
            if(x % 2 == 0) even_count++;
            else odd_count++;
        }

        if(even_count == 0) odd_count--;

        else if(even_count > 1) even_count = 1;

        int ans = odd_count + even_count;

        cout<<ans<<endl;
    }
}
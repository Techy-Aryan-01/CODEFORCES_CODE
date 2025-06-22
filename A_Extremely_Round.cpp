
#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

       int rev = 0;

       int len = -1;

       int digit = 0;

       while(n > 0){
        rev = rev * 10 + (n % 10);
        len++;
        n /= 10;
       }

       digit += rev % 10;

       for(int i = 0; i < len; i++) digit += 9;

       cout<<digit<<endl;

    }

    return 0;
}
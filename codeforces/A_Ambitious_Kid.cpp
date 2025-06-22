

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];

    int mn = 100001;

    for(int i = 0; i < n; i++){
        cin>>arr[i];

        mn = min(mn,abs(arr[i]));
    }

    cout<<mn<<endl;
}
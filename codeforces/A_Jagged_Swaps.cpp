

#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int arr[n];

        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }

        bool Is_Possible = true;

        for(int i = 1; i < n-1; i++){
            if(arr[i] > arr[i-1] && arr[i] > arr[i+1]){
                if(arr[i+1] < arr[i-1]){
                    Is_Possible = false;
                    break;
                }

                else{
                    swap(arr[i],arr[i+1]);
                }
            }

            else if(arr[i] < arr[i-1]){
                Is_Possible = false;
                break;
            }
        }

        if(Is_Possible) cout<<"YES"<<endl;

        else cout<<"NO"<<endl;
    }

    return 0;
}
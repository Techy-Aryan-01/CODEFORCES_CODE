
#include<iostream>
using namespace std;

int main(){
    int t;

    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int arr[n];

        for(int i = 0; i < n; i++) cin>>arr[i];

        int min_opr = 0;

        for(int i = n-2; i >= 0; i--){

            if(arr[i+1] == 0) {
                min_opr = -1;
                break;
            }
            while(arr[i] >= arr[i+1]) {
                arr[i] /= 2;
                min_opr++;
            }
        }

        cout<<min_opr<<endl;
    }

    return 0;
}
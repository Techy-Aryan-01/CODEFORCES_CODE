
#include<iostream>
#include<climits>
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

        int min_opr = INT_MAX;

        for(int i = 1; i < n; i++){
            if(arr[i] < arr[i-1]){
                min_opr = 0;
                break;
            }

            else{
                int diff = (arr[i] - arr[i-1]) / 2 + 1;
                min_opr = min(min_opr,diff);
            }
        }

        cout<<min_opr<<endl;
    }

    return 0;
}
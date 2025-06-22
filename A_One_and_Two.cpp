
#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int arr[n];

        int two_count = 0;

        for(int i = 0; i < n; i++) {
            cin>>arr[i];

            if(arr[i] == 2) two_count++;
        }

        if(two_count % 2 != 0) cout<<-1<<endl;

        else{
            int curr_two_count = 0;

            int min_req = two_count / 2;

            for(int i = 0; i < n; i++){
                if(arr[i] == 2) curr_two_count++;

                if(curr_two_count == min_req){
                    cout<<i+1<<endl;
                    break;
                }
            }
        }


    }

    return 0;
}
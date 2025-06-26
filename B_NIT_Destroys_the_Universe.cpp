#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int arr[n];
        for(int i = 0; i < n; i++) cin >> arr[i];

        int subsegment = 0;
        int count = 0;

        for(int i = 0; i < n; i++){
            if(arr[i] == 0){
                if(count) subsegment++;
                count = 0;
            }
            else count++;
        }

        if(count) subsegment++; // handle trailing non-zero segment

        cout << min(subsegment, 2) << endl;
    }

    return 0;
}

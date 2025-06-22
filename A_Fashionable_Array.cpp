

#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int arr[n];

        for(int i = 0; i < n; i++) cin>>arr[i];

        sort(arr,arr+n);

        for(int i = 0; i < n; i++) {
            if(arr[i] % 2 == 0) arr[i] = 0;

            else arr[i] = 1;
        }

        int min_opr = 100;

        int tem_opr = 0;

        int i = 0;

        int j = n-1;

        while(i < j && arr[i] != arr[j]){
            i++;
            tem_opr++;
        }

        min_opr = min(min_opr,tem_opr);

        i = 0;

        j = n-1;

        tem_opr = 0;

        
        while(i < j && arr[i] != arr[j]){
            j--;
            tem_opr++;
        }

        min_opr = min(min_opr,tem_opr);


        cout<<min_opr<<endl;


    }
}
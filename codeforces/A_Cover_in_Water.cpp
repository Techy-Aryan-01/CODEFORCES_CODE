

#include<iostream>
#include<string>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        char arr[n];

        for(int i = 0; i < n; i++){
            cin>>arr[i];
        }

        int empty = 0;

       int i = 0;
       while(i < n){
        int count = 0;
        if(arr[i] == '.'){
            int j = i;

            while(j < n && arr[j] == arr[i]){
                count++;
                j++;
            }
            i = j;
        }

        else i++;

        if(count > 2) {
            empty = 2;
            break;
        }

        else empty += count;
        
       }

       cout<<empty<<endl;
    }
}


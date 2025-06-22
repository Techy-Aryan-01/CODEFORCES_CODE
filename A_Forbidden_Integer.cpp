
#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,x;
        cin>>n>>k>>x;

        if(k <= 1) cout<<"NO"<<endl;

        else{
            if(x == 1 && k <= 2){
                if(n%2 == 0){
                    cout<<"YES"<<endl;
                    cout<<n/2<<endl;
                    for(int i = 0; i < n/2; i++) cout<<2<<" ";
                    cout<<endl;
                }

                else cout<<"NO"<<endl;
            }

            else if(x == 1){
                cout<<"YES"<<endl;
                if(n%2 == 0){
                    
                    cout<<n/2<<endl;
                    for(int i = 0; i < n/2; i++) cout<<2<<endl;
                }
                else{
                    int even = n/2-1;
                    
                    cout<<even+1<<endl;
                    for(int i = 0; i < even; i++) cout<<2<<" ";
                    cout<<3<<endl;
                }
            }

            else{
                cout<<"YES\n";
                cout<<n<<endl;
                for(int i = 0; i < n; i++) cout<<1<<" ";
                cout<<endl;
            }
        }


    }

    return 0;
}
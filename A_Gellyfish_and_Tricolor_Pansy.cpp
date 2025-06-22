

#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int a,b,c,d;

        cin>>a>>b>>c>>d;

        int gelly_min = min(a,c);

        int flo_min = min(b,d);

        
         if(gelly_min < flo_min) cout<<"Flower"<<endl;

         else cout<<"Gellyfish"<<endl;
    }

    return 0;
}
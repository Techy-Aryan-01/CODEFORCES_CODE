

// #include<iostream>
// #include<stack>
// using namespace std;

// int main(){
//     int t;
//     cin>>t;

//     while(t--){
//         int n;
//         cin>>n;

//         stack<int> st;

//         int arr[n];

//         int opr = 0;

//         for(int i = 0; i < n; i++) cin>>arr[i];

//         for(int i = 0; i < n; i++){
            
//                 if(!st.empty() && (st.top() % 2 == 0 && arr[i] % 2 == 0)) {
//                     int ref = st.top() * arr[i];
//                     st.pop();
//                     st.push(ref);
//                     opr++;
//                 } 

//                  else if(!st.empty() && (st.top() % 2 != 0 && arr[i] % 2 != 0)){
//                  int ref = st.top() * arr[i];
//                     st.pop();
//                     st.push(ref);
//                     opr++;
//             }

//             else st.push(arr[i]);

//             }

//             cout<<opr<<endl;
        

       
//     }

//     return 0;
// }



// another approach with constant space

#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        int arr[n];
        int opr = 0;

        for(int i = 0; i < n; i++) cin>>arr[i];

        int prev = arr[0];

        for(int i = 1; i < n; i++){
            if(prev % 2 == 0 && arr[i] % 2 == 0){
                opr++;
                prev *= arr[i];
            }

            else if(prev % 2 != 0 && arr[i] % 2 != 0){
                opr++;
                prev *= arr[i];
            }

            else prev = arr[i];
        }

        cout<<opr<<endl;
    }

    return 0;
}
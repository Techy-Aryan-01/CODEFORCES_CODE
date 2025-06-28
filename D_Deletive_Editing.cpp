

#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    while(n--){
        string s,t;

        cin>>s>>t;

        vector<vector<int>> index(26);

        for(int i = 0; i < s.size(); i++) index[s[i] - 'A'].push_back(i);

        int next_index = 31;

        string ans = "YES";

        for(int i = t.size()-1; i >= 0; i--){
            if(index[t[i] - 'A'].empty() || index[t[i] - 'A'].back() > next_index){
                ans = "NO";
                break;
            }

            else {
                next_index = index[t[i] - 'A'].back();
                index[t[i] - 'A'].pop_back();
            }
        }

        cout<<ans<<endl;
    }

    return 0;
}
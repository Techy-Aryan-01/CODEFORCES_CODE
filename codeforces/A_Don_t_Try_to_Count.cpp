#include <bits/stdc++.h>
using namespace std;

bool check(string s, string x)
{
    if (x.size() < s.size())
    {
        return false;
    }
    for (int i = 0; i < x.size() - s.size() + 1; i++) // n - m + 1
    {
        if (x.substr(i, s.size()) == s) // m
        {
            return true;
        }
    }
    return false;
} // O(n*m)

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, m;
        cin >> n >> m;
        string x;
        cin >> x;
        string s;
        cin >> s;
        // inputs

       int ans = -1;

       int operation = 0;

       while(operation <= 5){
        if(check(s,x)){
            ans = operation;
            break;
        }
        x += x;
        operation++;
       }

       cout<<ans<<endl;
    }
    return 0;
}

// tc - O(2^5*n*m) = O(32*n*m)
// sc - O(2^5*n) = O(32*n)
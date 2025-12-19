#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    string s;int n;cin>>s>>n;
    string match;
    bool found=false;
    while(n--)
    {
        string t;cin>>t;
        if(t.find(s)==0)
        {
            if(!found)//first time found
            {
               match=t;
               found=true;
            }
            else{
                if(t<match)
                {
                    match=t;
                }
            }
        }
    }
    if(found)
    {
        cout<<match;
    }
    else{
        cout<<s;
    }
    
}

int main() {
    
        solve();
    
}
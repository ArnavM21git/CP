#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n,z=0,maxzero=0;cin>>n;
    string s;cin>>s;
    string t=s+s;
    for(int i=0;i<t.size();i++)
    {
        if(t[i]=='0')
        {
            z++;
        }
        else {
            maxzero=max(maxzero,z);
            z=0;
        }
    }
    cout<<maxzero<<endl;
    
   
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}
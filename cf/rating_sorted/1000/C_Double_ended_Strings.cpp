#include <bits/stdc++.h>
using namespace std;
using ll=long long;

void solve() {
    string a,b;
    cin>>a>>b;
    string sub;
    ll maxl=0;
    for(ll i=0;i<=a.size()-1;i++)
    {
        for(ll noc=1;noc<=a.size()-i;noc++ )
        {
        sub=a.substr(i,noc);
        if(b.find(sub)!=string::npos)
        {
            maxl=max(maxl,noc);
        }
        }
    }
    ll total=a.size()+b.size()-(2*maxl);
    cout<<total<<endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}
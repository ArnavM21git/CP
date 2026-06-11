#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;cin>>n;
    string s;cin>>s;

    for(int i=0;i<n-2;i++)
    {
        if(s.find('.')!=string::npos)
        {
        if(s[i]=='.'&&s[i+1]=='.'&&s[i+2]=='.')
        {
            cout<<2<<endl;
            return;
        }
    }
    else{
        cout<<0<<endl;
        return;
    }
    }
    cout<<count(s.begin(),s.end(),'.')<<endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}
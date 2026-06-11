#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n;char c;cin>>n>>c;
    string s;cin>>s;
    if(count(s.begin(),s.end(),c)==n)
        {
            cout<<0<<endl;
            return;
        }
    for(int i=n/2;i<n;i++)
    {
        
        if(s[i]==c)
        {
            cout<<1<<endl;
            cout<<i+1<<endl;
            return;
        }
        
    }
    
    cout<<2<<endl;
    cout<<n<<" "<<n-1<<endl;
    return;
    
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}
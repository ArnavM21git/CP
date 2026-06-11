#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n,k;cin>>n>>k;
    bool f=false;
    while(n--)
    {
        int a;cin>>a;
        if(a==k)
        {
            f=true;
        }
        
    }
    if(f)
    {
        cout<<"YES"<<endl;
    }
    else{
    cout<<"NO"<<endl;
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}
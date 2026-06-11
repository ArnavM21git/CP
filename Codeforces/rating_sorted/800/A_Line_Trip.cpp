#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll n,x;cin>>n>>x;
    vector<ll> v(n);
    for(ll &a:v)
    {
        cin>>a;
    }
    ll maxg=max(v[0]-0,2*(x-v[n-1]));
    for(int i=1;i<n;i++)
    {
        maxg=max(maxg,v[i]-v[i-1]);
    }
    cout<<maxg<<endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}
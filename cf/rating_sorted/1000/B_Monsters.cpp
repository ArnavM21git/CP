// ================== LIMITS REFERENCE ==================
// INT_MAX        // int
// INT_MIN
//
// LONG_MAX       // long
// LONG_MIN
//
// LLONG_MAX      // long long
// LLONG_MIN
//
// UINT_MAX       // unsigned int
// ULONG_MAX      // unsigned long
// ULLONG_MAX     // unsigned long long
// ======================================================

#include <bits/stdc++.h>
using namespace std;

// 1. Typedefs for faster typing
using ll = long long;
using vi = vector<int>;

// 2. Fast I/O (crucial for competitive programming)
void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve() {
    int n,k;cin>>n>>k;
    vector<pair<ll,ll>> v(n);
    for(int i=0;i<n;i++)
    {
        ll a;cin>>a;
        v[i]={a,i+1};
    }
    for(int i=0;i<n;i++)
    {
        v[i].first%=k;
        if( v[i].first%k==0)  v[i].first=k;
    }
    sort(v.begin(),v.end(),[&] (pair<ll,ll> a,pair<ll,ll> b) {
        if(a.first!=b.first) return a.first>b.first;
        return a.second<b.second;
    });

    for(auto it:v)
    {
        cout<<it.second<<" ";
    }
    cout<<endl;

}

int main() {
    fast_io();
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
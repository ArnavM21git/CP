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
    int n,q;cin>>n>>q;
    vector<ll> a(n),k(q);
    for(auto &x:a) cin>>x;
    for(auto &x:k) cin>>x;

    vector<ll> psum(n+1,0),pmax(n+1,0);
    for(int i=1;i<=n;i++)
    {
        psum[i]=psum[i-1]+a[i-1];
        pmax[i]=max(pmax[i-1],a[i-1]);
    }
    for(ll x:k)
    {
        int idx=upper_bound(pmax.begin(),pmax.end(),x)-pmax.begin()-1;
        cout<<psum[idx]<<" ";
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
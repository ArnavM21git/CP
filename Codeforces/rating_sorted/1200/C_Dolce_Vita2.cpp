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
    int n,x;cin>>n>>x;
    vector<ll> a(n);for(auto &z:a) cin>>z;
    sort(a.begin(),a.end());
    vector<ll> presum(n);
    presum[0]=a[0];
    for(int i=1;i<n;i++) presum[i]=presum[i-1]+a[i];
    ll ans=0;
    for(int i=0;i<n;i++)
    {
        if(presum[i]>x) break;
        ll days=(1LL*(x-presum[i]))/(1ll*(i+1))+1;
        ans+=days;
    }
    cout<<ans<<endl;
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
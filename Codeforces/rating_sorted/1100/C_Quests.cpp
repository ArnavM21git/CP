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
    ll n,k,ans=0;cin>>n>>k;
    vector<ll> a(n),b(n);
    for(auto &x:a) cin>>x;
    for(auto &y:b) cin>>y;
    ll sum=0,maxb=0;
    for(int i=0;i<min(n,k);i++)
    {
        
        sum+=a[i];
        maxb=max(maxb,b[i]);
        ll rbsum=sum+(k-(i+1))*maxb;
        ans=max(ans,rbsum);
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
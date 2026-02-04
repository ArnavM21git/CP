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
    ll n,c;cin>>n>>c;
    vector<int> a(n);
    for(auto &x:a) cin>>x;
    ll ans=LLONG_MIN;

    ll l=0;ll r=1e9;
    while(l<=r)
    {
        ll c2=0;
        ll mid=l+(r-l)/2;
        for(int x:a)
        {
            c2+=(2*mid+x)*(2*mid+x);
            if(c2>c)
            {
            r=mid-1;break;
            }
        }
        
        if(c2<=c){
            ans=max(ans,mid);
            l=mid+1;
        }
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
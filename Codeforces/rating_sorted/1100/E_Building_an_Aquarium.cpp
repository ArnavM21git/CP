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
    ll n,x;cin>>n>>x;
    vector<ll> a(n);
    for(auto &x:a) cin>>x;
    ll l=0,r=2e9+10;
    ll h=LLONG_MIN;
    while(l<=r)
    {
        ll w=0;
        ll mid=l+(r-l)/2;
        for(int i=0;i<n;i++)
        {
            if(a[i]<mid) 
            {
                w+=mid-a[i];
            }
        }
        if(w>x)
        {
            r=mid-1;
        }
        else{
            h=max(h,mid);
            l=mid+1;
        }
    }
    cout<<h<<endl;
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
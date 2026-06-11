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
    int n;cin>>n;
    vector<int> a(n);
    ll ans=0;
    for(auto &x:a) cin>>x;
    vector<ll> bit(32,0);
    for(int x:a)
    {
        for(int i=31;i>=0;i--)
        {
            if((x&(1<<i))>0)
            {
                bit[i]++;
                break;
            }
        }
    }
    for(int i=0;i<=31;i++)
    {
        ans+=(bit[i]*(bit[i]-1)/2);
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
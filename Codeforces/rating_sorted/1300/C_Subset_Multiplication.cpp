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
    vector <ll> v(n);
    for(auto &x:v) cin>>x;
    ll ans=1;
    for(int i=0;i<n-1;i++)
    {
        if(v[i+1]%v[i]!=0)
        {
        ll cans=v[i]/(__gcd(v[i],v[i+1]));
        ans=ans*cans/__gcd(ans,cans);
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
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
    ll n,k;cin>>n>>k;
    vector<ll> a(n);
    for(auto &x:a)
    {
        cin>>x;
    }
    sort(a.begin(),a.end());
    ll c=1;
    ll lar=1;
    for(int i=1;i<n;i++)
    {
        if(a[i]-a[i-1]<=k) c++;
        else c=1;
        lar=max(lar,c);
    }
    cout<<n-lar<<endl;
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
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
    ll sum=0;
    for(auto &x:a) {cin>>x;sum+=x;}
    vector<ll> pre(n+1,0);
    for(int i=1;i<=n;i++)
    {
        pre[i]=pre[i-1]+a[i-1];
    }

    ll mxgcd=LLONG_MIN;

    for(int i=1;i<n;i++)
    {
        mxgcd=max(__gcd(pre[i],sum-pre[i]),mxgcd);
    }
    cout<<mxgcd<<endl;
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
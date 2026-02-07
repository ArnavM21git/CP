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
    vector<int> a(n);
    for(auto &x:a) cin>>x;
    sort(a.begin(),a.end());
    vector<ll> pre(n+1,0);
    for(int i=1;i<=n;i++)
    {
        pre[i]=pre[i-1]+a[i-1];
    }
    ll mx=LLONG_MIN;
    ll sum=pre[n];
    for(int i=0;i<=k;i++)
    {
        ll op1=i;ll op2=k-i;
        ll i1=2*i;ll i2=n-i;
        mx=max(mx,sum-pre[i1]-(pre[n]-pre[n-(k-i)]));
    }
    cout<<mx<<endl;
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
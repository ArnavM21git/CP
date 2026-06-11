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
    int lo=INT_MAX;
    int lo2=INT_MAX;
    ll sum=0;
    while(n--)
    {
        int m;cin>>m;
        vector<int> a(m);
        for (auto&x:a) cin>>x;
        sort(a.begin(),a.end());
        lo=min(lo,a[0]);
        lo2=min(lo2,a[1]);
        sum+=a[1];
    }
    sum=sum-lo2+lo;
    cout<<sum<<endl;
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
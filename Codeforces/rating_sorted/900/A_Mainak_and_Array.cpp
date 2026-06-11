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
    int maxx=0;
    vector<int> a(n);
    for(auto &x:a) cin>>x;
    for(int i=0;i<n-1;i++)
    {
        maxx=max(maxx,a[i]-a[i+1]);
    }
    for(int i=1;i<n;i++)
    {
        maxx=max(maxx,a[i]-a[0]);
    }
    for(int i=0;i<n-1;i++) maxx=max(maxx,a[n-1]-a[i]);
    cout<<maxx<<endl;
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
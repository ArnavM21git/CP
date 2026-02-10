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
    vector<int> c(n);
    for(auto &x:c) cin>>x;
    sort(c.begin(),c.end());
    if(c[0]!=1) {cout<<"NO"<<endl;return;}
    ll sum=1;
    for(int i=1;i<n;i++)
    {
        if(c[i]>sum) {cout<<"NO"<<endl;return;}
        sum+=c[i];
    }
    cout<<"YES"<<endl;
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
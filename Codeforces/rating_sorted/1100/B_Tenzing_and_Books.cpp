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
    int n,x;cin>>n>>x;
    vector<int> a(n),b(n),c(n);
    for(auto &w:a) cin>>w;
    for(auto &y:b) cin>>y;
    for(auto &z:c) cin>>z;

    ll k=0;
    for(int v:a)
    {
        if((v|x)!=x) break;
        k|=v;
    }
    for(int v:b)
    {
        if((v|x)!=x) break;
        k|=v;
    }
    for(int v:c)
    {
        if((v|x)!=x) break;
        k|=v;
    }

    if(k==x) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
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
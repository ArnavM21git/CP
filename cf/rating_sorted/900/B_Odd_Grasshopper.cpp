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
    ll x0,n;cin>>x0>>n;
    ll f;
    if(n%4==0)
    {
        f=0;
    }
    if(n%4==1)
    {
        f=-n;
    }
    if(n%4==2)
    {
        f=1;
    }
    if(n%4==3)
    {
        f=n+1;
    }

    // shifting origin

    if(x0%2==0) f=x0+f;
    else f=x0-f;

    cout<<f<<endl;
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
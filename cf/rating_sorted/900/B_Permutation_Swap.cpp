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
    vector<int> p(n);
    for(auto &x:p)
    {
        cin>>x;
    }
    int k;
    int lar=0;
    for(int i=0;i<n;i++)
    {
        k=abs(p[i]-(i+1));
        lar=__gcd(lar,k);
    }
    cout<<lar<<endl;
}

int main() {
    fast_io();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
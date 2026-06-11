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
    ll a,b;cin>>a>>b;
    ll ra=a,rb=b;
    while(ra%2==0) ra/=2;
    while(rb%2==0) rb/=2;
    if(ra!=rb) {cout<<-1<<endl;return;}
    a/=ra;b/=rb;
    int pa=log2(a);int pb=log2(b);
    cout<<ceil(abs(pa-pb)/3.0)<<endl;
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
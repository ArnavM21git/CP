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
    string s;cin>>s;
    string r;cin>>r;

    int c0=0,c1=0;
    for(char ch:s)
    {
        if(ch=='0') c0++;
        if(ch=='1') c1++;
    }
    if(c1==n||c0==n) {cout<<"NO"<<endl;return;}

    for(char ch:r)
    {
        if(ch=='0') c1--;
        if(ch=='1') c0--;

        if(c1==0 ||c0==0) break;
    }

    if(c1+c0>1) cout<<"NO"<<endl;
    else cout<<"YES"<<endl;
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
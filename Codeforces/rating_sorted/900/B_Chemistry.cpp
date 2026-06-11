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
    vector<int> f(125,0);
    string s;cin>>s;
    int o=0;
    for(char ch:s)
    {
        f[ch]++;
       
    }
    for(int i=97;i<123;i++)
    {
        if(f[i]%2!=0) o++;
    }
    if(o-1<=k) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
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
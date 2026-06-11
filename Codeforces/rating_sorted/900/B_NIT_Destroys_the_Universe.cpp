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
    int n,c0=0;cin>>n;vector<int> a(n);
    for(auto &x:a) 
    {
        cin>>x;
        if(x==0) c0++;
    }
    if(c0==n)
    {
        cout<<0<<endl;return;
    }
    int l=0,r=n-1;
    while(a[l]==0) l++;
    while (a[r]==0) r--;

    for(int i=l;i<=r;i++)
    {
        if(a[i]==0)
        {
         cout<<2<<endl;
         return;
        }

    }
    cout<<1<<endl;
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
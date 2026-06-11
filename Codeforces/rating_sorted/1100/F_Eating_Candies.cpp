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
    vector<int> a(n);
    for(auto &x:a) cin>>x;
    ll wa=0,wb=0;
    int l=0,r=n-1;
    int c=0,mx=0;

    while(l<=r)
    {
        if(wa>wb)
        {
            c++;
            wb+=a[r];
            r--;
        }
        else
        {
            c++;
            wa+=a[l];
            l++;
        }
        if(wa==wb)

        {
            mx=max(mx,c);
        }
    }
    cout<<mx<<endl;

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
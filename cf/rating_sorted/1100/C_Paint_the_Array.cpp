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
    ll n;cin>>n;
    vector<ll> a(n);
    for(auto &x:a) cin>>x;
    ll gcde=0,gcdo=0;
    for(int i=0;i<n;i+=2)
    {
        gcde=__gcd(gcde,a[i]);
    }
    for(int i=1;i<n;i+=2)
    {
        gcdo=__gcd(gcdo,a[i]);
    }

    bool flag1=true;

    for(int i=1;i<n;i+=2)
    {
        if(a[i]%gcde==0)
        {
            flag1=false;break;
        }
    }
    if(flag1) {cout<<gcde<<endl;return;}
    bool flag2=true;

    for(int i=0;i<n;i+=2)
    {
        if(a[i]%gcdo==0)
        {
            flag2=false;break;
        }
    }
    if(flag2) {cout<<gcdo<<endl;return;}

    
    cout<<0<<endl;
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
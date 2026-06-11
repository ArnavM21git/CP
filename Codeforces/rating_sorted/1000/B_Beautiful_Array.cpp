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
    ll n,k,b;ll s;cin>>n>>k>>b>>s;
    ll l=k*b;
    ll h=k*b+n*(k-1);
    if(s<l || s>h)
    {
        cout<<-1<<endl;
        return;
    }
    else{
        vector<ll> v(n);
        v[0]=l;
        s-=l;
        for(int i=0;i<n;i++)
        {
            ll add=min(k-1,s);
            v[i]+=add;
            s-=add;
        }
        for(int i=0;i<n;i++)
        {
            cout<<v[i]<<" ";
        }
    }
    cout<<endl;
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
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
    ll n,k,x;cin>>n>>k>>x;
    vector<ll> a(n);
    for(auto &x:a) cin>>x;
    sort(a.begin(),a.end());

    ll c=1;
    vector<ll> gap;
    for(int i=1;i<n;i++)
    {
        if(a[i]-a[i-1]>x) 
        {
            c++;
            gap.push_back(a[i]-a[i-1]);
        }
    }

    sort(gap.begin(),gap.end());

    ll rem=k;
    for(int i=0;i<gap.size();i++)
    {
        ll req=(gap[i]-1)/x;
        if(req>rem) break;
        c--;rem-=req;
    }
    cout<<c<<endl;
}

int main() {
    fast_io();
    
        solve();
    
    return 0;
}
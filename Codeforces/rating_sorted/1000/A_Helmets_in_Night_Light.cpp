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
    ll n,p;cin>>n>>p;
    vector<ll> a(n),b(n);
    for(auto&x:a) cin>>x;
    for(auto&y:b) cin>>y;
    vector<pair<ll,ll>> v(n);
    for(int i=0;i<n;i++) v[i]={b[i],a[i]};
    sort(v.begin(),v.end());
    ll mincst=p;
    ll shared=1;
    for(auto it:v)
    {
        ll sh=it.second;
        ll cst=it.first;
        if(p<cst) break;
        if(shared+sh>n)
        {
            mincst+=(n-shared)*cst;
            shared=n;
            break;
        }
        else{
            mincst+=sh*cst;
            shared+=sh;
        }

    }
    mincst+=(n-shared)*p;
    cout<<mincst<<endl;

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
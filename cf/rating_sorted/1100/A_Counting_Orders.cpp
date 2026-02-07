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
#define MOD (ll)(1e9+7)
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
    vector<int> a(n),b(n);
    for(auto &x:a) cin>>x;
    for(auto &y:b) cin>>y;

    sort(a.begin(),a.end());
    sort(b.rbegin(),b.rend());
    ll ans=1;
    int i=0;
    for(int x:b)
    {
        
        ll idx=upper_bound(a.begin(),a.end(),x)-a.begin();
        ll c=a.size()-idx;
        ans=(ans*(max((c-i),0LL)))% MOD;
        i++;
    }
    cout<<ans<<endl;

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
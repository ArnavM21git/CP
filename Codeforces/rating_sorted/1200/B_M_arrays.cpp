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
    int n,m;cin>>n>>m;
    vector<int> a(n);
    for(auto &x:a) cin>>x;
    vector<int> rem(m,0);
    for(int i=0;i<n;i++)
    {
        rem[a[i]%m]++;
    }
    ll ans=0;
    for(int i=0;i<m;i++)
    {
        int x=rem[i];int y=rem[(m-i)%m];
        if(x==0&&y==0) continue;
        int mn=min(x,y);
        x-=min(mn+1,x);
        y-=min(mn+1,y);
        ans++;
        ans+=(x+y);
        rem[i]=0;rem[(m-i)%m]=0;
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
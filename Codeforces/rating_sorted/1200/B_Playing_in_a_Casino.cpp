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

    vector<vector<ll>> c(m,vector<ll>(n));

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>c[j][i];
        }
    }

    for(int i=0;i<m;i++)
    {
        sort(c[i].begin(),c[i].end());
    }

    ll ans=0;

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            ans+=j*c[i][j];
            ans-=(n-j-1)*c[i][j];
        }
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
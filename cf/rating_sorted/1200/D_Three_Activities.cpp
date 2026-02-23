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
    vector<pair<ll,ll>> a(n),b(n),c(n);
    for(int i=0;i<n;i++)
    {
        ll x;cin>>x;
        a[i].first=x;
        a[i].second=i;
    }
    for(int i=0;i<n;i++)
    {
        ll x;cin>>x;
        b[i].first=x;
        b[i].second=i;
    }
    for(int i=0;i<n;i++)
    {
        ll x;cin>>x;
        c[i].first=x;
        c[i].second=i;
    }
    sort(a.rbegin(),a.rend());
    sort(b.rbegin(),b.rend());
    sort(c.rbegin(),c.rend());

    ll ans=LLONG_MIN;
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                int x=a[i].second,y=b[j].second,z=c[k].second;
                if((x==y)||(y==z)||(z==x)) continue;

                ans=max(ans,a[i].first+b[j].first+c[k].first);
            }
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
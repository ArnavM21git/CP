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
    vector<pair<ll,ll>> a(n);
    for(int i=0;i<n;i++)
    {
        int b;cin>>b;
        a[i].first=b;a[i].second=i;
    }
    sort(a.begin(),a.end());
    vector<ll> pre(n);
    pre[0]=a[0].first;
    for(int i=1;i<n;i++)
    {
        pre[i]=pre[i-1]+a[i].first;
    }
    vector<ll> ans(n);
    for(int i=0;i<n;i++)
    {
        ll found=i;
        ll j=i;
        while(j<n)

        {
            pair<ll,ll> temp={pre[j]+1,INT_MIN};
            ll idx=lower_bound(a.begin(),a.end(),temp)-a.begin();
            idx--;
            if(j==idx) break;
            found+=idx-j;
            j=idx;
        }
        ans[a[i].second]=found;
        
        
    }
    for(int x:ans) cout<<x<<" ";
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
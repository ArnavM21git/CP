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
 ll bs(ll z,ll x,ll count)
 {
    ll l=1,h=1e9+2;ll ans=0;
    while(l<=h)
    {
        ll mid=(l)+(h-l)/2;
        if(z+((mid-1)*count)<=x)
        {
            ans=max(ans,mid);
            l=mid+1;
        }
        else{
            h=mid-1;
        }
    }
    return ans;
 }


void solve() {
    ll n,x;cin>>n>>x;ll ans=0;
    vector<ll> a(n);
    for(auto &x:a) cin>>x;
    sort(a.begin(),a.end());
    vector<ll> presum(n);
    presum[0]=a[0];
    for(int i=1;i<n;i++)
    {
        presum[i]=presum[i-1]+a[i];
    }

    for(ll i=0;i<n;i++)
    {
        ans+=bs(presum[i],x,i+1);
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
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
    vector<ll> a(m);
    for(auto &x:a) cin>>x;
    sort(a.begin(),a.end());
    vector<ll> gap(m);

    for(int i=0;i<m-1;i++)
    {
        gap[i]=a[(i+1)]-a[i]-1;
    }
    gap[m-1]=a[0]-a[m-1]+n-1;

    sort(gap.rbegin(),gap.rend());

    ll ans=0;
    ll in=0;
    for(int i=0;i<m;i++)
    {
        ll rem=gap[i]-in;
        if(rem<=0) break;

        if(rem==1)
        {
            ans+=1;in+=2;
        }
        else{
        ans+=rem-1;in+=4;
        }
    }
    cout<<n-ans<<endl;
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
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
    vector<int> a(n);
    for(auto &x:a) cin>>x;
    vector<ll> pre(n+1,0);
    for(int i=1;i<=n;i++)
    {
        pre[i]=pre[i-1]+a[i-1];
    }
    vector<int> v;
    for(int i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
             v.push_back(i);
             if(i*i!=n) v.push_back(n/i);
        }
    }
 
    ll gsum=LLONG_MIN;
    for(int k:v)
    {
        ll sum,mx,mn;
        for(int i=k;i<=n;i+=k)
        {
            sum=abs(pre[i]-pre[i-k]);
            if(sum>mx) mx=sum;
            if(sum<mn) mn=sum;
        }
        gsum=max(gsum,mx-mn);
    }
    cout<<gsum<<endl;
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
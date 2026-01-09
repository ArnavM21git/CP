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
    vector<int> a(n),b(n);
    for(auto &x:a) cin>>x;
    for(auto &y:b) cin>>y;

    vector<ll> suba(2*n+1);
    vector<ll> subb(2*n+1);

    ll c=1;
    for(int i=1;i<n;i++)
    {
        if(a[i-1]==a[i])
        {
            c++;
        }
        else{
            suba[a[i-1]]=max(suba[a[i-1]],c);
            c=1;
        }
    }

    suba[a[n-1]]=max(suba[a[n-1]],c);

    c=1;
    for(int i=1;i<n;i++)
    {
        if(b[i-1]==b[i])
        {
            c++;
        }
        else{
            subb[b[i-1]]=max(subb[b[i-1]],c);
            c=1;
        }
    }
    subb[b[n-1]]=max(subb[b[n-1]],c);

    ll large=LLONG_MIN;
    
    for(int i=1;i<=2*n;i++)
    {
        large=max(large,suba[i]+subb[i]);
    }
    cout<<large<<endl;

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
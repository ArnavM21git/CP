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
    ll w,h;cin>>w>>h;
    ll area=-1;
    for(int i=0;i<4;i++)
    {
        int n;cin>>n;
        ll f,l;

        for(int j=0;j<n;j++)
        {
            int p;cin>>p;
            if(j==0) f=p;
            if(j==n-1) l=p;
        }

        ll d=l-f;

        ll he;

        if(i<=1)
        {
            he=h;
        }
        else{
            he=w;
        }
        area=max(area,d*he);
    }
    cout<<area<<endl;
    

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
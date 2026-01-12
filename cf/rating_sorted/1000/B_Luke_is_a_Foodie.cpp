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
    int n,c=0,x;cin>>n>>x;
    int l,r;
    bool f=false;
    vector<pair<int,int>> a(n);
    for(int i=0;i<n;i++)
    {
        int y;cin>>y;
        a[i]={y-x,y+x};
    }
    auto t=a[0];
    l=t.first;
    r=t.second;
    for(int i=1;i<n;i++)
    {
        l=max(l,a[i].first);
        r=min(r,a[i].second);
        if(l>r)
        {
            c++; 
            l=a[i].first;
            r=a[i].second;
        }
    }
    cout<<c<<endl;
    
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
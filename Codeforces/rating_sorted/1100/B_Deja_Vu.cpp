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
    int n,q;cin>>n>>q;
    vector<int> a(n);
    vector<int> x(q);
    for(auto &x:a) cin>>x;
    for(auto &y:x) cin>>y;
    vector<int> pre;

    int prev=31;

    for(int i=0;i<q;i++)
    {
        if(x[i]<prev) 
        {
            pre.push_back(x[i]);
            prev=x[i];
        }
    }

    for(int x:pre)
    {
        for(int i=0;i<n;i++)
        {
            if(a[i]%(1<<x)==0) a[i]+=1<<(x-1);
        }
    }

    for(int x:a) cout<<x<<" ";
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
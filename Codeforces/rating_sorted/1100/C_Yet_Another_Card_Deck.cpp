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
    vector<int> a(n),t(q);
    for(auto &x:a) cin>>x;
    for(auto &x:t) cin>>x;
    vector<int> fp(51,n+1);
    for(int i=0;i<n;i++)
    {
        if(fp[a[i]]==n+1)
            fp[a[i]]=i+1;
    }
    for(int i=0;i<q;i++)
    {
        int p=fp[t[i]];
        cout<<p<<" ";

        for(int j=1;j<=50;j++)
        {
            if(fp[j]<p)
              fp[j]++;
        }
        fp[t[i]]=1;
        
    }
    cout<<endl;
}

int main() {
    fast_io();
    
    solve();
    
    return 0;
}
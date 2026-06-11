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
    vector<int> a1(n),a2(n);
    for(auto &x:a1) cin>>x;
    for(auto &x:a2) cin>>x;

    int l,r;

    for(int i=0;i<n;i++)
    {
        if(a1[i]!=a2[i])
        {
            l=i;
            break;
        }
    }
    for(int i=n-1;i>=0;i--)
    {
        if(a1[i]!=a2[i])
        {
            r=i;
            break;
        }
    }

    for(int i=l;i>0;i--)
    {
        if(a2[l]>=a2[l-1])
        {
            l--;
        }
    }
    for(int i=r;i<n-1;i++)
    {
        if(a2[r]<=a2[r+1])
        {
            r++;
        }
    }
    cout<<l+1<<" "<<r+1<<endl;
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
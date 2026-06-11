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
    int cmx=n;
    int cmn=1;

    int l=0,r=n-1;
    while(l<=r)
    {
        if(a[l]==cmn)
        {
            l++;cmn++;
        }
        else if(a[r]==cmx)
        {
            r--;cmx--;
        }
        else if(a[l]==cmx)
        {
            l++;cmx--;
        }
        else if(a[r]==cmn)
        {
            r--;cmn++;
        }
        else break;
    }
    if(l>r) cout<<-1<<endl;
    else{
        cout<<l+1<<" "<<r+1bf xnm,l.;

\    }
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
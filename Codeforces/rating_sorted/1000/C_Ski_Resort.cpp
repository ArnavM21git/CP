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
    int n,k,q;cin>>n>>k>>q;
    ll ways=0,c=0;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        v[i]=(v[i]<=q)?1:0;
    }
    for(int i=0;i<n;i++)
    {
        if(v[i]==1)
        {
            c++;
        }
        else{
            if(c>=k)
            {
            ll end=c-k+1;
            ways+=end*(end+1)/2;
            }
            c=0;
        }
    }
    if(c>=k)
    {
        ll end=c-k+1;
        ways+=end*(end+1)/2;

    }
    cout<<ways<<endl;

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
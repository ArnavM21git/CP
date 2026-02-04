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
    ll n,k,a,b;;cin>>n>>k>>a>>b;
    vector<ll> x(n),y(n);
    for(int i=0;i<n;i++) cin>>x[i]>>y[i];

    ll bx=x[a-1];
    ll by=y[a-1];
    ll ex=x[b-1];
    ll ey=y[b-1];

    ll mnb=4e9;//as max dis=4 times 10^9
    ll mne=4e9;

    ll direct=abs(bx-ex)+abs(ey-by);

    for(int i=0;i<k;i++)
    {
        mnb=min(mnb,abs(bx-x[i])+abs(by-y[i]));
    }
    for(int i=0;i<k;i++)
    {
        mne=min(mne,abs(ex-x[i])+abs(ey-y[i]));
    }

    cout<<min(mne+mnb,direct)<<endl;
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
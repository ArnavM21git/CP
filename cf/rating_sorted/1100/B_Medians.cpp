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
    int n,k;cin>>n>>k;
    vector<int> a(n);
    for(int i=1;i<=n;i++) 
    {
        a[i-1]=i;
    }
    if(n==1)
    {
        if(k==1) cout<<1<<endl<<1<<endl;
        else cout<<-1<<endl;
        return;
    }

    if(k==1||k==n)
    {
        cout<<-1<<endl;return;
    }
    if((k-1)%2==0)
    {
        cout<<3<<endl<<1<<" "<<k-1<<" "<<k+2<<endl;
    }
    else{
        cout<<3<<endl<<"1 "<<k<<" "<<k+1<<endl;
    }
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
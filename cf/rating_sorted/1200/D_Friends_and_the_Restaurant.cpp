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
    vector<int> x(n);
    vector<int> y(n);
    for(int &z:x) cin>>z;
    for(int &z:y) cin>>z;
    vector<int> dif(n);
    for(int i=0;i<n;i++)
    {
        dif[i]=y[i]-x[i];
    }
    sort(dif.begin(),dif.end());
    int l=0,r=n-1,c=0;
    while(l<r)
    {
        if(dif[l]+dif[r]>=0) 
        {
            c++;l++;r--;
        }
        else l++;
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
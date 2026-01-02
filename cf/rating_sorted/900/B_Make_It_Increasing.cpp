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
    int n,ops=0;cin>>n;
    vector<int> a(n);
    for(auto &x:a)
    {
        cin>>x;
    }
    for(int i=n-1;i>0;i--)
    {
        while(a[i]<=a[i-1])
        {
            a[i-1]/=2;ops++;
            if(a[i-1]==0) break;
        }
        if(a[i-1]==0&&a[i]==0) 
        {
            ops=-1;
            break;}
    }
   cout<<ops<<endl;
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
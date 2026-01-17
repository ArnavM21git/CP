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
    int n,m;
    cin>>n>>m;
    vector<int> a(n);
    for(auto &x:a) cin>>x;
    sort(a.begin(),a.end());
    int p=a[n-1];
    while(m--)
    {
        char ch;int l,r;cin>>ch>>l>>r;
        if(ch=='+')
        {
            if(p>=l&&p<=r) p++;
        }
        else{
            if(p>=l&&p<=r) p--;
        }
        cout<<p<<" ";
    }
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
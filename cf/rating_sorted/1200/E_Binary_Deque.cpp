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
    int n,s;cin>>n>>s;
    ll sum=0;   
    vector<int> a(n);
    for(auto &x:a) {cin>>x;sum+=x;}
    
    if(sum<s) {cout<<-1<<endl;return;}

    if(sum==s) {cout<<0<<endl;return;}

    int l=0;ll csum=0;
    int mxlen=0;
    for(int r=0;r<n;r++)
    {
        csum+=a[r];
        while(csum>s&&l<=r)
        {
            csum-=a[l];l++;
        }
        if(csum==s) mxlen=max(mxlen,r-l+1);
    }
    cout<<n-mxlen<<endl;



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
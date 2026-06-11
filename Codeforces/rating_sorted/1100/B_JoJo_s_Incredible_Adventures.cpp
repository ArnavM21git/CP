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
    string s;cin>>s;
    ll n=s.size();
    s=s+s;
    ll lc=0;
    ll mlc=LLONG_MIN;

    for(char ch:s)
    {
        if(ch=='1')
        {
            lc++;
        }
        else{
            lc=0;
        }
        mlc=max(mlc,lc);
    }

    if(mlc>n) mlc=n;

    if(mlc==n) 
    {
        cout<<n*n<<endl;return;
    }

    ll k=mlc;
    ll r,c;

    r=(k+1)/2;
    c=k+1-r;
    
    cout<<r*c<<endl;
    
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
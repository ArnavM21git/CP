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
    ll a,b,c;cin>>a>>b>>c;
    bool flag=false;
    ll a1=2*b-c;
    if(a1%a==0 &&a1/a>0) flag=true;

    ll b1=(a+c)/2;
    if(b1%b==0&&b1/b>0&&(c-a)%2==0) flag=true;

    ll c1=2*b-a;
    if(c1%c==0&&c1/c>0) flag=true;

    if(flag) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;

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
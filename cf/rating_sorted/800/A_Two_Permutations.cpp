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

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    int n,a,b;cin>>n>>a>>b;
    if((a==b&&b==n)||(a+b+2<=n)) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}
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
    ll n,k;cin>>n>>k;
    if(n%2==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        if(k%2!=0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}
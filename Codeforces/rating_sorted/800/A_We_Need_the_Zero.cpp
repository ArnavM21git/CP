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
    int n;cin>>n;
    int xorr=0;
    for(int i=0;i<n;i++)
    {
        int a;cin>>a;
        xorr^=a;
    }
    if(n%2==0)
    {
        if(xorr==0) cout<<10<<endl;//any no 10  0 11 12 etc
        else cout<<-1<<endl;
    }
    else{
        cout<<xorr<<endl;
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}
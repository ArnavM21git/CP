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
    int o=0;
    for(int i=0;i<n;i++)
    {
        int a;cin>>a;
        if(a%2!=0) o++;
    }
    if(o%2==0)
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}
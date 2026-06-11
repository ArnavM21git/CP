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
    int a,b,c;cin>>a>>b>>c;
    if(a>b) cout<<"First"<<endl;
    else if(a<b) cout<<"Second"<<endl;
    else 
    {
        if(c%2==0) cout<<"Second"<<endl;
        else cout<<"First"<<endl;
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}
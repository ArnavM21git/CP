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
    int l=n;
    string s;cin>>s;
    for(int i=0;i<=((n/2)-1);i++ )
    {
        if(s[i]!=s[n-i-1])
        {
            l-=2;
        }
        else {
            break;
        }
    }
    cout<<l<<endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}
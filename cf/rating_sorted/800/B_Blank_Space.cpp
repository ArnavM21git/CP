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
    int c=0,maxx=0;
    while(n--)
    {
        int a;cin>>a;
        if(a==0)
        {
            c++;
            maxx=max(c,maxx);
        }
        else c=0;
    }
    cout<<maxx<<endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}
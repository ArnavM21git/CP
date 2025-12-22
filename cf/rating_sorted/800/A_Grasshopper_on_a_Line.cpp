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
    int x,k;cin>>x>>k;
    if(x%k!=0) {cout<<1<<endl<<x<<endl; return;}
    for(int i=x;i>0;i--)
    {
        if(i%k!=0&&(x-i)%k!=0)
        {
            cout<<2<<endl<<i<<" "<<x-i<<endl;
            return;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}
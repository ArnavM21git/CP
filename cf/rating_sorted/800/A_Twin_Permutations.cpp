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
    vector <int> a(n),b(n);
    for(auto &x:a)
    {
        cin>>x;
    }
    for(int i=0;i<n;i++)
    {
        b[i]=(n+1)-a[i];
    }
    for(auto &x:b)
    {
        cout<<x<<" ";
    }
    cout<<endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}
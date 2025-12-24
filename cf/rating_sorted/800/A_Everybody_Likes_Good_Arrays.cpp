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
    int ops=0;
    vector<int> v(n);
    for(auto &a:v)
    {
        cin>>a;
    }
    for(int i=1;i<n;i++)
    {
        if((v[i]&1)==(v[i-1]&1)) ops++;
    }
    cout<<ops<<endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}
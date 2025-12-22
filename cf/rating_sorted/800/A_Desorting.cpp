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
    vector<int> v(n);
    int mini=INT_MAX;
    for(auto &a:v)
    {
        cin>>a;
    }
    if(!is_sorted(v.begin(),v.end()))
    {
        cout<<0<<endl;
        return;
    }
    for(int i=0;i<n-1;i++)
    {
        mini=min(mini,v[i+1]-v[i]);
    }
    cout<<(mini/2)+1<<endl;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}
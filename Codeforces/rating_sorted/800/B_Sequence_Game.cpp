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
    vector<int> a(n);
    for(auto &x:a)
    {
        cin>>x;
    }
    vector<int> b;
    b.push_back(a[0]);
    for(int i=1;i<n;i++)
    {
        if(a[i]<a[i-1])
        {
            b.push_back(a[i]);
            b.push_back(a[i]);
        }
        else{
            b.push_back(a[i]);
        }
    }
    cout<<b.size()<<endl;
    for(auto &a:b)
    {
        cout<<a<<" ";
    }
    
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}
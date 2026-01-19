// ================== LIMITS REFERENCE ==================
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
// ======================================================

#include <bits/stdc++.h>
using namespace std;

// 1. Typedefs for faster typing
using ll = long long;
using vi = vector<int>;

// 2. Fast I/O (crucial for competitive programming)
void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve() {
    int n,c0=0,c1=0,c=0;cin>>n;
    string s;cin>>s;
    if(is_sorted(s.begin(),s.end()))
    {
        cout<<"Bob"<<endl;return;
    }
    cout<<"Alice"<<endl;
    for(auto x:s)
    {
        if(x=='1') c1++;
        else c0++;
    }
    vector<int> v;
    for(int i=0;i<c0;i++)
    {
        if(s[i]=='1')
        {
            c++;
            v.push_back(i+1);
        }
    }
    for(int i=c0;i<n;i++)
    {
        if(s[i]=='0')
        {
            c++;
            v.push_back(i+1);
        }
    }
    cout<<c<<endl;
    for(int x:v) cout<<x<<" ";
    cout<<endl;
}

int main() {
    fast_io();
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
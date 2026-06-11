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
    int n;char ch;cin>>n>>ch;
    string s;cin>>s;
    s=s+s;
    int ind=-1;
    int mx=INT_MIN;
    for(int i=s.size()-1;i>=0;i--)
    {
        if(s[i]=='g')
        {
            ind=i;
        }
        if(s[i]==ch)
        {
            mx=max(mx,ind-i);
        }
    }
    cout<<mx<<endl;

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
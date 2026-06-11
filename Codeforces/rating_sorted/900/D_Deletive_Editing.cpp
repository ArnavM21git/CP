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
    string s,t;cin>>s>>t;
    vector<int> f(26,0);
    for(char ch:t) f[ch-'A']++;
    for(int i=s.size()-1;i>=0;i--)
    {
        if(f[s[i]-'A']>0) f[s[i]-'A']--;
        else s[i]='.';
    }
    string fs="";
    for(char ch:s)
    {
        if(ch!='.') fs+=ch;
    }
    if(fs==t) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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
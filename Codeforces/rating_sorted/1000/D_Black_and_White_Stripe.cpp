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
    int n,k,c=0;cin>>n>>k;
    int mn=INT_MAX;
    string s;cin>>s;
    vector<int> v(n);
    for(int i=0;i<n;i++)
    {
        if(s[i]=='B')
        {
            v[i]=c;
        }
        else 
        {
            c++;
            v[i]=c;
        }
    }
    for(int i=k-1;i<n;i++)
    {
        mn=min(mn,v[i]-((i-k<0)?0:v[i-k]));
    }
    cout<<mn<<endl;
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
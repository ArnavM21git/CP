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
    int n;cin>>n;string s;cin>>s;
    for(int i=1;i<n;i++)
    {
        if(s[i]<s[i-1])
        {
            cout<<"YES"<<endl;
            cout<<i<<" "<<i+1;
            return;
        }
    }
    cout<<"NO"<<endl;
}

int main() {
    fast_io();
     {
        solve();
    }
    return 0;
}
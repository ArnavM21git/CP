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
    ll n;string s;
    ll lar=0;
    cin>>n>>s;
    char ch=s[0];
    ll c=0;
    for(int i=0;i<n;i++)

    {
        if(s[i]==ch) c++;
        else 
        {
            c=1;
            ch=s[i];

        }
        lar=max(lar,c);
    }
    cout<<lar+1<<endl;
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
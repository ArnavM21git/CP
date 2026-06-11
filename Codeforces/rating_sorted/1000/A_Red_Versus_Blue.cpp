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
    int n,r,b;
    cin>>n>>r>>b;
    string s="";
    int seg=r/(b+1);
    int rem=r%(b+1);
    
    for(int i=1;i<=b+1;i++)
    {
        for(int i=0;i<seg;i++)
        {
            s+='R';
        }
        if(rem>0)
        {
            s+='R';
            rem--;
        }
        if(i<b+1)
            s+='B';
    }
    cout<<s<<endl;


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
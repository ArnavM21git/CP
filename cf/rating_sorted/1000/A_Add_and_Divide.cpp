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
    int a,b;cin>>a>>b;
    int ans=INT_MAX;
    for(int i=0;i<=35;i++)
    {
        int ops=0;
        int nb=b+i;
        if(nb==1) continue;
        // int ops=log2(a)/log2(nb);
        int temp=a;
        while(temp>0)
        {
            temp/=nb;
            ops++;
        }
        ans=min(ans,i+ops);
    }
    cout<<ans<<endl;
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
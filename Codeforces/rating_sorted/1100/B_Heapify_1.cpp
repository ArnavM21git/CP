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
    int n;cin>>n;
    vector<int> a(n);
    for(auto &x:a) cin>>x;
    for(int i=1;i<=n;i++)
    {
        bool flag=false;
        if(a[i-1]==i)
        {
            continue;   
        }
        for(int j=i;j<=n;j*=2)
        {
                if(a[j-1]==i)
                {
                   flag=true; break;
                }
        }
        for(int j=i;j>0;j/=2)
        {
            if(a[j-1]==i)
                {
                    flag=true;break;
                }
        }

        if(!flag)
        {
            cout<<"NO"<<endl;return;
        }
    }
    cout<<"YES"<<endl;
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
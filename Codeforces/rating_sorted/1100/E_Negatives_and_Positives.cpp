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
    int n,cn=0;cin>>n;
    vector<int> a(n);
    
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        if(x<0)
        {
            cn++;
            a[i]=-x;continue;
        }
        a[i]=x;
    }


    sort(a.begin(),a.end());
    int f=a[0];

    ll sum=0;
    for(int i=1;i<n;i++)
    {
        sum+=a[i];
    }

    for(int i=0;i<cn;i++)
    {
        f=-f;
    }
    sum+=f;
    
    cout<<sum<<endl;
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
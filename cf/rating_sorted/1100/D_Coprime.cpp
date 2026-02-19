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

vector<int> pairs[1001];

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
    vector<int> idx(1001,0);
    for(int i=1;i<=n;i++)
    {
        int x;cin>>x;
        idx[x]=i;
    }
    int mx=-1;
    for(int i=1;i<=1000;i++)
    {
        
        if(idx[i]==0) continue;
        for(int j: pairs[i])
        {
            if(idx[j]!=0)
            {
            mx=max(mx,idx[i]+idx[j]);
            }
        }
    }
    cout<<mx<<endl;
}

int main() {
    fast_io();

    for(int i=1;i<=1000;i++)
    {
        for(int j=1;j<=1000;j++)
        {
            if(__gcd(i,j)==1)
            {
                pairs[i].push_back(j);
            }
        }
    }
    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}
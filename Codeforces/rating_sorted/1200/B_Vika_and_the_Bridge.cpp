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
    int n,k;cin>>n>>k;
    vector<int> c(n);
    for(auto &x:c) cin>>x;

    vector<vector<int>> idx(k+1);

    for(int i=0;i<k;i++)
    {
        idx[i+1].push_back(0);
    }

    for(int i=0;i<n;i++)
    {
        idx[c[i]].push_back(i+1);
    }

    for(int i=0;i<k;i++)
    {
        idx[i+1].push_back(n+1);
    }
    
int gmax=INT_MAX;
    for(int i=1;i<=k;i++)
    {
        vector<int> gaps;
        for(int j=1;j<idx[i].size();j++)
        {
            gaps.push_back(idx[i][j]-idx[i][j-1]-1);
        }

        sort(gaps.rbegin(),gaps.rend());
        int mx1=gaps[0],mx2=gaps[1];

        mx1/=2;

        int cmax=max(mx1,mx2);

        gmax=min(gmax,cmax);
    }
    cout<<gmax<<endl;

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
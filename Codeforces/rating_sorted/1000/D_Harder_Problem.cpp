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
    vector<int> pre(n+1,0);
    vector<int> ans;
    for(auto &x:a)
    {
        cin>>x;
        if(!pre[x])
        {
            pre[x]=1;
            ans.push_back(x);
        }
    } 
    for(int i=1;i<=n;i++)
    {
        if(!pre[i])
        {
            ans.push_back(i);
        }

    }
    
    for(int x:ans)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    

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
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
    set<int> s;
    for(int x:a) s.insert(x);
    if(s.size()==1) 
    {
        cout<<"NO"<<endl;return;
    }
    int u1=a[0];int u1i=1;int u2,u2i;
    for(int i=1;i<n;i++)
    {
        if(a[i]!=u1) 
        {
            u2=a[i];u2i=i+1;
        }
    }
    cout<<"YES"<<endl;
    for(int i=1;i<n;i++)
    {
        if(a[i]!=u1)
        {
            cout<<u1i<<" "<<i+1<<endl; 
        }
        else{
            cout<<u2i<<" "<<i+1<<endl;
        }
    }
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
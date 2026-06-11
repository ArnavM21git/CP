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
    int k;cin>>k;
    int e=0;
    bool f=false;
    int mn=INT_MAX;
    vector<int> a(n);
    for(auto &x:a) 
    {
        cin>>x;
        if(x%k==0)
        {
            f=true;
        }
        if(x%2==0) e++;
    }   
    if(f)
    {
        cout<<0<<endl;
        return;
    }
    for(int x:a)
    {
        if(k-x>0)
        {
            mn=min(mn,k-x);
        }
        else{
            mn=min(mn,k-(x%k));
        }
    }
    if(k==4)
    {
        mn=min(mn,max(0,2-e));
    }
    cout<<mn<<endl;
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
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
    int q;cin>>q;
    vector<int> idx;
    for(int i=1;i<n;i++)
    {
        if(a[i]!=a[i-1])
        {
            idx.push_back(i);
        }
    }
    while(q--)
    {
        int l,r;cin>>l>>r;l--;r--;
        auto it=lower_bound(idx.begin(),idx.end(),l+1);
        if(it == idx.end() || *it > r)
        {
            cout <<-1<<" "<<-1<<endl;
        }
        else cout<<(*it-1)+1<<" "<<(*it)+1<<endl;
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
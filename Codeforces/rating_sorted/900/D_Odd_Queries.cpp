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
    int n,q,sum=0;cin>>n>>q;
    vector<int> a(n);
    for(auto &x:a)
    {
        cin>>x;
        sum+=x;
    }
    vector<int> ps(n+1,0);
    for (int i = 1; i <=n ; i++)
    {
        ps[i]=ps[i-1]+a[i-1];
    }
    while(q--)
    {
        int l,r,k,news=sum;cin>>l>>r>>k;
        news=news-(ps[r]-ps[l-1])+(r-l+1)*k;
        if(news%2==0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
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
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
    int n,q;cin>>n>>q;ll sum=0;
    
    vector<pair<ll,int>> tq1(n,{0,0});
    for(int i=0;i<n;i++)
    {
        cin>>tq1[i].first;
        sum+=tq1[i].first;
    }
    pair<ll,int> tq2={0,-1};
    for(int qu=1;qu<=q;qu++)
    {
        int t;cin>>t;
        if(t==1)
        {
            int idx;ll x;
            cin>>idx>>x;idx--;
            int val=(tq2.second>tq1[idx].second)?tq2.first:tq1[idx].first;
            sum=sum-val+x;
            cout<<sum<<endl;
            tq1[idx].first=x;
            tq1[idx].second=qu;
            
        }
        else{
            ll x;cin>>x;
            cout<<x*n<<endl;
            sum=x*n;
            tq2.first=x;
            tq2.second=qu;

        }
    }
    
}

int main() {
    fast_io();
    
        solve();
    
    return 0;
}
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
    ll sum=0,odsu=0,evsu=0,e=0,o=0;
    vector<int> v(n+1);
    for(int i=1;i<=n;i++) 
    {
        cin>>v[i];
        sum+=v[i];
        if(i%2==0) 
        {
            evsu+=v[i];
            e++;
        }
        else 
        {
            odsu+=v[i];
            o++;
        }
    }
    if(sum%n!=0)
    {
        cout<<"NO"<<endl;
        return;
    }

    ll avg=sum/n;
    ll odavg=odsu/o;
    ll evavg=evsu/e;

    if(avg==odavg&&avg==evavg)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;

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
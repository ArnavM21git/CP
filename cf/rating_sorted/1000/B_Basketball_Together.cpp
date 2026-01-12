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
    int n,c=0;ll d;cin>>n>>d;
    vector<int> p(n);
    for(int i=0;i<n;i++)
    {
        cin>>p[i];
    }
    sort(p.begin(),p.end());
    int l=0,r=n-1;
    int  nop=0;
    while(l<=r)
    {
        if(p[r]+(1LL*nop*p[r])>d)
        {
            c++;
            nop=0;
            r--;
        }
        else{
            l++;
            nop++;
        }
    }
    cout<<c<<endl;


}

int main() {
    fast_io();
   
    
        solve();
    
    return 0;
}
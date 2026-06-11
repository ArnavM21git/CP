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
    int n,a,b;cin>>n>>a>>b;
    string s;cin>>s;
    int xi=0,yi=0;
    int x=0,y=0;
    for(int i=0;i<100;i++)
    {
    for(char ch:s)
    {
        if(ch=='E')
        {
            xi++;
        }
        else if(ch=='N')
        {
            yi++;
        }

        else if(ch=='S')
        {
            yi--;
        }
        else{
            xi--;
        }
        if(xi==a&&yi==b)
        {
            cout<<"YES"<<endl;
            return;
        }

    }
}
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
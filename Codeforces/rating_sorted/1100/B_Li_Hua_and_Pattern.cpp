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
    vector<vector<int>> a(n+1,vector<int>(n+1));
    int c=0;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin>>a[i][j];
        }
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            if(a[i][j]!=a[n-i+1][n-j+1]) c++;
        }
    }
    c/=2;

    if(c>k)
    {
        cout<<"NO"<<endl;return;
    }
    else{
        ll rem=k-c;
        if(rem%2==0)
        {
            cout<<"YES"<<endl;
        }
        else{
            if(n%2!=0) {cout<<"YES"<<endl;}
            else{
            cout<<"NO"<<endl;}
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
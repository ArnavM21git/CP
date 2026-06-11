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
    int dx[4]={-1,-1,1,1},dy[4]={1,-1,1,-1};
    int c =0;
    int a,b;cin>>a>>b;
    int xk,yk;cin>>xk>>yk;
    int xq,yq;cin>>xq>>yq;

    set<pair<int,int>> q,k;

    for(int i=0;i<4;i++)
    {
        q.insert({xq+dx[i]*a,yq+dy[i]*b});
        q.insert({xq+dx[i]*b,yq+dy[i]*a});

        k.insert({xk+dx[i]*a,yk+dy[i]*b});
        k.insert({xk+dx[i]*b,yk+dy[i]*a});


    }
    for(auto x:q)
    {
        if(k.find(x)!=k.end())
        {
            c++;
        }
    }
    cout<<c<<endl;


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
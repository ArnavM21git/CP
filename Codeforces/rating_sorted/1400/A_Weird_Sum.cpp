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

// ----- SIEVE TEMPLATE -----
// TC: O(n log log n)
// const int N = 1e7 + 10;
// vector<bool> is_prime(N,1);
//
// void sieve(){
//     is_prime[0] = is_prime[1] = 0;
//     for(int i = 2; i < N; i++){
//         if(is_prime[i])
//             for(int j = 2 * i; j < N; j += i)
//                 is_prime[j] = 0;
//     }
// }

// 2. Fast I/O (crucial for competitive programming)
void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

void solve() {
    int n,m;cin>>n>>m;
    vector<vector<int>> c(n,vector<int>(m));
    for(auto &a:c)
    {
        for(auto &x:a) cin>>x;
    }
    vector<vector<int>> x(1e5+5),y(1e5+5);
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            x[c[i][j]-1].push_back(i);
            y[c[i][j]-1].push_back(j);
        }
    }
    ll ans=0;
    for(auto &p:x)
    {
        sort(p.rbegin(),p.rend());
        for(int i=0,k=p.size()-1;  i<p.size();  i++,k-=2)
        {
            ans+=1LL*k*p[i];
        }
    }
    for(auto &p:y)
    {
        sort(p.rbegin(),p.rend());
        for(int i=0,k=p.size()-1;  i<p.size();  i++,k-=2)
        {
            ans+=1LL*k*p[i];
        }
    }
    cout<<ans;
}

int main() {
    fast_io();
    int t = 1;
  
    while (t--) {
        solve();
    }
    return 0;
}
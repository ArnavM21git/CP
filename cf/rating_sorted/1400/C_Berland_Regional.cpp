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
    int n;cin>>n;
    vector<int> u(n),s(n);
    for(auto &x:u) cin>>x;
    for(auto &x:s) cin>>x;

    vector<vector<int>> d(n+1);
    for(int i=0;i<n;i++)
    {
        d[u[i]].push_back(s[i]);
    }
    for(auto &r:d) sort(r.rbegin(),r.rend());

    vector<vector<ll>> prefix(n+1,vector<ll>(1,0));
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<d[i].size();j++)
        {
            prefix[i].push_back(prefix[i].back()+d[i][j]);
        }
    }

    vector<ll> ans(n+1);

    for(int i=1;i<=n;i++)
    {
        int siz=d[i].size();
        for(int k=1;k<=siz;k++)
        {
            ans[k]+=prefix[i][siz-(siz%k)]-prefix[i][0];
        }
    }

    for(int i=1;i<=n;i++) cout<<ans[i]<<" ";
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
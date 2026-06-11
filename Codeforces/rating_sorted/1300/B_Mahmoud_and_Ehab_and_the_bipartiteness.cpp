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

int r=0;int w=0;

void dfs(int n,int col,vector<int> &visited,vector<vector<int>> &adj)
{
    visited[n]++;
    if(col==0) w++;
    else r++;
    for(int n:adj[n])
    {
        if(!visited[n]) dfs(n,1-col,visited,adj);
    }
}

void solve() {
    int n;cin>>n;
    vector<vector<int>> adj(n,vector<int>());
    vector<int> visited(n);
    for(int i=0;i<n-1;i++)
    {
        int u,v;cin>>u>>v;
        u--;v--;
        adj[u].push_back(v);
        adj[v].push_back(u);
        
    }
    dfs(0,0,visited,adj);
    cout<<1LL*r*w-(n-1);
}

int main() {
    fast_io();
    int t = 1;
    while (t--) {
        solve();
    }
    return 0;
}